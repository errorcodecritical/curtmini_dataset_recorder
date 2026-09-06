FROM ros:jazzy-ros-base

LABEL maintainer="Tobias M. Hulland <tobias.hulland@isr.uc.pt>"

ENV DEBIAN_FRONTEND=noninteractive

#Install ROS Packages
RUN apt update \
    && apt install -y \
    ros-jazzy-diagnostic-updater \
    ros-jazzy-librealsense* \
    ros-jazzy-cv-bridge \
    ros-jazzy-image-transport \
    ros-jazzy-rmw-cyclonedds-cpp

# Create the main workspace directory
WORKDIR /ros2_ws

RUN echo "source /opt/ros/jazzy/setup.bash"    >> /root/.bashrc && \     
    echo "source /ros2_ws/install/setup.bash"    >> /root/.bashrc