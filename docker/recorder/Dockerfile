FROM ros:jazzy-ros-base

LABEL maintainer="Tobias M. Hulland <tobias.hulland@isr.uc.pt>"

ENV DEBIAN_FRONTEND=noninteractive

# Install packages
RUN apt update \
    && apt install -y \
    libeigen3-dev \
    libjsoncpp-dev \
    libspdlog-dev \
    libcurl4-openssl-dev \
    libpcap-dev \
    libopencv-dev \
    libboost-all-dev \
    libncurses-dev

#Install ros2 pkg
RUN apt -y install ros-jazzy-rmw-cyclonedds-cpp \
    ros-jazzy-rosbag2-storage-mcap \
    ros-jazzy-cv-bridge \
    ros-jazzy-image-transport \
    ros-jazzy-diagnostic-updater \
    ros-jazzy-realsense2-camera-msgs \
    ros-jazzy-pcl-ros \
    ros-jazzy-metavision-driver \
    ros-jazzy-tf2-eigen

# Create the main workspace directory
WORKDIR /ros2_ws

RUN echo "source /opt/ros/jazzy/setup.bash"    >> /root/.bashrc && \     
    echo "source /ros2_ws/install/setup.bash"    >> /root/.bashrc
