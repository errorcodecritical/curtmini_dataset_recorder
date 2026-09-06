FROM ros:jazzy-ros-base

LABEL maintainer="Tobias M. Hulland <tobias.hulland@isr.uc.pt>"

ENV DEBIAN_FRONTEND=noninteractive

#Install System Packages
RUN apt update \
    && apt install -y \
    libasio-dev \
    iproute2

#Install ROS Packages
RUN apt-get install -y \
    ros-jazzy-rmw-cyclonedds-cpp \
    ros-jazzy-robot-state-publisher \
    ros-jazzy-joint-state-publisher \
    ros-jazzy-joint-state-publisher-gui \
    ros-jazzy-xacro \
    ros-jazzy-teleop-twist-joy \
    ros-jazzy-teleop-twist-keyboard \
    ros-jazzy-twist-mux \
    ros-jazzy-joy-linux \
    ros-jazzy-ros2-control \
    ros-jazzy-ros2-controllers \
    ros-jazzy-rqt-plot

WORKDIR /ros2_ws

RUN echo "source /opt/ros/jazzy/setup.bash"      >> /root/.bashrc && \     
    echo "source /ros2_ws/install/setup.bash"     >> /root/.bashrc