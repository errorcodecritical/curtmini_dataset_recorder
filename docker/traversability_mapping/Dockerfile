FROM ros:jazzy-ros-base

LABEL maintainer="Tobias M. Hulland <tobias.hulland@isr.uc.pt>"

SHELL ["/bin/bash","-c"]

ENV DEBIAN_FRONTEND=noninteractive

# Install system dependencies
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    libpcl-dev \
    pcl-tools \
    libopencv-dev \
    libeigen3-dev \
    libboost-all-dev \
    libflann-dev \
    libyaml-cpp-dev \
    libssl-dev \
    lsb-release

# Install additional ROS2 packages
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    ros-jazzy-rclcpp \
    ros-jazzy-rclcpp-components \
    ros-jazzy-geometry-msgs \
    ros-jazzy-sensor-msgs \
    ros-jazzy-nav-msgs \
    ros-jazzy-std-msgs \
    ros-jazzy-visualization-msgs \
    ros-jazzy-tf2 \
    ros-jazzy-tf2-ros \
    ros-jazzy-tf2-geometry-msgs \
    ros-jazzy-pcl-ros \
    ros-jazzy-pcl-conversions \
    ros-jazzy-cv-bridge \
    ros-jazzy-image-transport \
    ros-jazzy-navigation2 \
    ros-jazzy-nav2-bringup \
    ros-jazzy-laser-geometry \
    ros-jazzy-pluginlib \
    ros-jazzy-launch-ros \
    ros-jazzy-ament-cmake \
    ros-jazzy-ament-flake8 \
    ros-jazzy-ament-pep257 \
    ros-jazzy-ament-cpplint \
    ros-jazzy-ament-clang-format \
    ros-jazzy-rmw-cyclonedds-cpp

RUN apt-get clean

WORKDIR /ros2_ws

RUN echo "source /opt/ros/jazzy/setup.bash"      >> /root/.bashrc && \     
    echo "source /ros2_ws/install/setup.bash"     >> /root/.bashrc