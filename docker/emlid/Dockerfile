FROM ros:jazzy-ros-base

LABEL maintainer="Tobias M. Hulland <tobias.hulland@isr.uc.pt>"

ENV DEBIAN_FRONTEND=noninteractive

# Install some python packages
RUN apt update \
    && apt install -y \ 
    python3-serial

#Install ROS Packages
RUN apt-get install -y \
    ros-jazzy-tf-transformations \
    ros-jazzy-rmw-cyclonedds-cpp

# Create the main workspace directory
WORKDIR /ros2_ws

RUN echo "source /opt/ros/jazzy/setup.bash"    >> /root/.bashrc && \     
    echo "source /ros2_ws/install/setup.bash"    >> /root/.bashrc
