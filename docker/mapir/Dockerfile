FROM ros:jazzy-ros-base

LABEL maintainer="Tobias M. Hulland <tobias.hulland@isr.uc.pt>"

ENV DEBIAN_FRONTEND=noninteractive

RUN apt update \
    && apt install -y --no-install-recommends \
    usbutils \
    v4l-utils \
    build-essential \
    python3-colcon-common-extensions \
    python3-numpy \
    python3-opencv \
    libopencv-dev \
    gstreamer1.0-tools \
    gstreamer1.0-plugins-base \
    gstreamer1.0-plugins-good \
    gstreamer1.0-plugins-bad \
    gstreamer1.0-plugins-ugly \
    gstreamer1.0-libav \
    ros-jazzy-cv-bridge \
    ros-jazzy-compressed-image-transport \
    ros-jazzy-ffmpeg-image-transport \
    ros-jazzy-image-transport \
    ros-jazzy-camera-info-manager-py \
    ros-jazzy-camera-info-manager \
    ros-jazzy-tf2-ros \
    ros-jazzy-image-tools \
    ros-jazzy-rmw-cyclonedds-cpp \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /ros2_ws

RUN echo "source /opt/ros/jazzy/setup.bash"    >> /root/.bashrc && \
    echo "source /ros2_ws/install/setup.bash"    >> /root/.bashrc
