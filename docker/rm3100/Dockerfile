FROM ros:jazzy-ros-base

LABEL maintainer="Tobias M. Hulland <tobias.hulland@isr.uc.pt>"

SHELL ["/bin/bash", "-c"]

ENV DEBIAN_FRONTEND=noninteractive

RUN apt update \
    && apt install -y \
    git \
    build-essential \
    python3-colcon-common-extensions \
    libgeographiclib-dev \
    libcxxopts-dev \
    libexpected-dev \
    libboost-dev \
    iproute2 \
    can-utils \
    python3-pip \
    ros-$ROS_DISTRO-angles \
    ros-$ROS_DISTRO-topic-tools \
    ros-$ROS_DISTRO-sensor-msgs \
    ros-$ROS_DISTRO-std-msgs \
    ros-$ROS_DISTRO-backward-ros \
    ros-$ROS_DISTRO-rmw-cyclonedds-cpp \
    && rm -rf /var/lib/apt/lists/*

RUN pip install dronecan ahrs --break-system-packages

# Underlay: compass_interfaces (+ deps) baked in image, so the /ros2_ws mount can stay source-only.
# rm3100_driver (go1_magnetometer_rm3100) + imu_mag_fusion live in /ros2_ws/src.
WORKDIR /opt/rm3100_deps/src
RUN git clone -b ros2 https://github.com/ctu-vras/compass.git \
    && git clone https://github.com/TartanLlama/expected.git \
    && git clone -b ros2 https://github.com/ctu-vras/ros-utils.git \
    && git clone https://github.com/ctu-vras/cras_msgs.git
WORKDIR /opt/rm3100_deps
RUN source /opt/ros/$ROS_DISTRO/setup.bash \
    && colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release

WORKDIR /ros2_ws

RUN echo "source /opt/ros/jazzy/setup.bash"        >> /root/.bashrc && \
    echo "source /opt/rm3100_deps/install/setup.bash" >> /root/.bashrc && \
    echo "source /ros2_ws/install/setup.bash"        >> /root/.bashrc
