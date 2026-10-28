# Curtmini Dataset Recorder (ROS 2)

A Dockerized, multi-sensor data-recording pipeline for the **Curt Mini** UGV, built on **ROS 2 Jazzy**. Each sensor driver runs in its own container, all containers share a single ROS 2 workspace, and everything is orchestrated through Docker Compose.

## Contents

- [Sensors & Hardware](#sensors--hardware)
- [System Architecture](#system-architecture)
- [Repository Layout](#repository-layout)
- [Prerequisites](#prerequisites)
- [Getting the Code](#getting-the-code)
- [Running the System](#running-the-system)
- [Recording Configuration](#recording-configuration)
- [Sensor Configuration Reference](#sensor-configuration-reference)

## Sensors & Hardware

| Sensor | Purpose | Container |
|---|---|---|
| Ouster OS1 | 3D LiDAR | `ouster_driver` |
| Intel RealSense | RGB-D camera | `realsense_driver` |
| Prophesee EVK4 | Event camera | `evk4_driver` |
| Mapir Survey3 | Multispectral camera | `mapir_driver` |
| Xsens MTi | IMU | `xsens_driver` |
| OpenZen LPMS | IMU | `openzen_driver` |
| RM3100 | Magnetometer | `rm3100_driver` |
| Emlid Reach M2 | GNSS-RTK | `emlid_driver` |
| Agilex Curt Mini | Robot base / chassis driver | `curtmini` |
| — | ROS 2 bag recording (`hector_recorder`) | `recorder` |
| — | Nav2 navigation stack | `nav2` |
| — | Traversability mapping | `traversability_mapping` |
| — | iceoryx RouDi middleware broker | `roudi` |

## System Architecture

- **One container per sensor.** Each sensor has its own Dockerfile (`docker/<sensor>/Dockerfile`) and its own ROS 2 driver dependencies, so a failure or rebuild of one sensor doesn't affect the others.
- **Shared ROS 2 workspace.** All containers mount the same `ros2_ws/` directory, so interfaces (custom messages, description packages, drivers) are built once and available everywhere.
- **Config injection via bind mounts.** Sensor-specific tuning files in `config/` are bind-mounted directly over the driver's default config inside each container, so you can edit a YAML file on the host without rebuilding an image.
- **iceoryx shared memory.** RouDi broker manages shared-memory transport between containers (`config/iceoryx/roudi_config.toml`). Set `shm_size: 13gb` on roudi for the NUC.
- **Central orchestration.** `docker/docker-compose.yml` defines sensor services; root `docker-compose.yml` adds navigation overrides (nav2, localization, exploration).
- **Recording.** The `recorder` container runs [`hector_recorder`](https://github.com/tu-darmstadt-ros-pkg/hector_recorder), an interactive TUI for starting/stopping `ros2 bag` recordings, writing bags to a host-mounted `rosbags/` directory.

## Repository Layout

```
curtmini_dataset_recorder/
├── config/                        # Per-sensor configuration files, bind-mounted into containers
│   ├── cyclonedds/                #   cyclonedds-local.xml + cyclonedds-bridge.xml
│   ├── iceoryx/                   #   roudi_config.toml (mempool sizes)
│   ├── sysctl.d/                  #   10-cyclone-max.conf (apply on host: sysctl -p)
│   ├── ouster/                    #   driver_params.yaml
│   ├── realsense/                 #   rs_launch.py
│   ├── xsens/                     #   norlab_xsens_driver node + launch overrides
│   ├── openzen/                   #   OpenZenNode config + launch
│   ├── rm3100/                    #   rm3100_driver params + launch
│   ├── mapir/                     #   camera launch + params
│   ├── emlid/                     #   nmea_serial_driver node + config
│   ├── nav2/                      #   nav2_params.yaml
│   ├── hmr_localisation/          #   NDT localisation config (Ouster tree)
│   ├── traversability_mapping/    #   traversability mapping config
│   ├── scovox/                    #   exploration config
│   ├── explo_planner/             #   exploration planner config
│   └── bridge/                    #   bridge_config.yaml (multi-host, optional)
├── docker/
│   ├── curtmini/, ouster/, realsense/, evk4/, mapir/   # Per-sensor Dockerfiles
│   ├── xsens/, openzen/, rm3100/, emlid/               # IMU + GNSS Dockerfiles
│   ├── roudi/                     #   iceoryx RouDi broker image
│   ├── traversability_mapping/    #   traversability mapping image
│   ├── recorder/                  #   hector_recorder image
│   └── docker-compose.yml         #   Defines all sensor + middleware services
├── ros2_ws/
│   └── src/
│       ├── curt_mini/             #   curt_mini driver + ros2_control + twist_mux config
│       ├── curt_description/      #   URDF/xacro model + meshes
│       ├── candle_ros2/           #   CAN interface driver
│       ├── imu_mag_fusion/        #   IMU + magnetometer fusion node
│       ├── hector_recorder/       #   ROS 2 bag recording TUI (submodule)
│       ├── metavision_driver/     #   EVK4 event camera driver (submodule)
│       ├── nmea_navsat_driver/    #   GNSS driver (submodule)
│       ├── norlab_xsens_driver/   #   Xsens IMU driver (submodule)
│       ├── ouster-ros/            #   Ouster LiDAR driver (submodule)
│       ├── realsense-ros/         #   RealSense driver (submodule)
│       └── traversability_mapping/ # Traversability + elevation_msgs (submodule)
├── ext/
│   ├── hmr_localisation/          #   HMR LiDAR NDT localisation stack (submodule)
│   ├── scovox/                    #   Exploration (submodule)
│   └── explo_planner/             #   Exploration planner (submodule)
├── rosbags/                       # Host-mounted bag output directory
└── docker-compose.yml             # Root compose — navigation + localization overrides
```

## Prerequisites

- Docker Engine + Docker Compose v2 (`docker compose ...`)
- Intel NUC running Ubuntu 22.04 or 24.04 (x86_64)
- No NVIDIA GPU required — all containers use CPU-only base images
- Host kernel buffers tuned: `sudo sysctl -p config/sysctl.d/10-cyclone-max.conf`
- udev rules configured for RealSense, Ouster, EVK4, Mapir (`/etc/udev/rules.d/` on host)
- Robot base on USB-CDC: `/dev/ttyACM1`
- Joystick (Logitech F710) on `/dev/input/f710`

## Getting the Code

Several drivers are pulled in as git submodules, so clone recursively:

```bash
git clone --recurse-submodules https://github.com/errorcodecritical/curtmini_dataset_recorder.git
cd curtmini_dataset_recorder
```

If you already cloned without `--recurse-submodules`:

```bash
git submodule update --init --recursive
```

## Running the System

### 1. Connect to the robot's onboard computer

```bash
ssh nuc-curt-mini-sn3@10.42.0.1
```


### 2. Apply host kernel settings (first boot only)

```bash
sudo sysctl -p config/sysctl.d/10-cyclone-max.conf
```

### 3. Start the stack

```bash
docker compose -f docker/docker-compose.yml up -d
docker compose -f docker/docker-compose.yml run -i --rm recorder
```

You'll be prompted for a bag name (leave blank to auto-generate), then recording begins. All `ros2 bag` output is written to `rosbags/`.

To bring up navigation (nav2 + localization + exploration) alongside sensors:

```bash
docker compose up -d
```

### 4. Stop the system

Press **Ctrl+C** in the recorder session to stop recording. To tear down all containers:

```bash
docker compose -f docker/docker-compose.yml down
```

## Recording Configuration

Topics recorded by `hector_recorder`:

```text
/ouster/points
/camera/color/image_raw
/camera/color/camera_info
/evk4/events
/imu/data
/imu/mag
/fix
/tf
/tf_static
```

## Sensor Configuration Reference

All per-sensor tuning lives under `config/` and is bind-mounted into the matching container.

| Sensor | Config files | Notes |
|---|---|---|
| **Ouster LiDAR** | `config/ouster/driver_params.yaml` | Topic: `/ouster/points` |
| **RealSense** | `config/realsense/rs_launch.py` | Topic namespace: `/camera/` |
| **EVK4 event camera** | via `metavision_driver` submodule | Topic: `/evk4/events` |
| **Mapir** | `config/mapir/` | camera_info + params |
| **Xsens MTi** | `config/xsens/xsens_driver.launch.xml`, `mtdevice.py`, `mtnode.py` | `norlab_xsens_driver` |
| **OpenZen LPMS** | `config/openzen/openzen_lpms.launch.py` | |
| **RM3100 magnetometer** | `config/rm3100/params.yaml` | Serial driver |
| **Emlid GNSS-RTK** | `config/emlid/nmea_serial_driver.yaml` | Topic: `/fix` |
| **Twist mux** | `ros2_ws/src/curt_mini/curt_mini/config/twist_mux.yaml` | joystick priority 50, nav2 priority 40 |
| **Joystick** | `ros2_ws/src/curt_mini/curt_mini/config/joystick.yaml` | Logitech F710, LB=enable, RB=turbo |

## Submodules

| Package | Upstream |
|---|---|
| `ouster-ros` | https://github.com/errorcodecritical/ouster-ros |
| `realsense-ros` | https://github.com/IntelRealSense/realsense-ros |
| `metavision_driver` | https://github.com/ros-event-camera/metavision_driver |
| `nmea_navsat_driver` | https://github.com/ros-drivers/nmea_navsat_driver (branch `ros2`) |
| `hector_recorder` | https://github.com/tu-darmstadt-ros-pkg/hector_recorder |
| `norlab_xsens_driver` | https://github.com/norlab-ulaval/norlab_xsens_driver |
| `traversability_mapping` | https://github.com/errorcodecritical/traversability_mapping |
| `hmr_localisation` | https://github.com/kalhansb/hmr_localisation (branch `field-experiments`) |
| `scovox` | https://github.com/kalhansb/scovox (branch `field-experiments`) |
| `explo_planner` | https://github.com/kalhansb/explo_planner |
