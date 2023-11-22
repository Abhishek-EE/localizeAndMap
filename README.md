# Sensor Fusion for SLAM

This repository contains the C++ code for a sensor fusion system designed to integrate data from two 2D LiDARs, a ZED Mini camera, and an Inertial Measurement Unit (IMU) for applications in Simultaneous Localization and Mapping (SLAM).

## Overview

The system is designed to capture, preprocess, and fuse data from different sensors to achieve a robust understanding of the spatial environment and the sensor platform's orientation and position within it. This is particularly useful in robotics and autonomous navigation tasks.

### Components

- **Lidar (Front and Rear):** Two 2D LiDAR sensors provide spatial data in the form of point clouds.
- **Camera (ZED Mini):** A stereo camera offers visual data and depth perception.
- **IMU:** Provides acceleration and angular rate measurements crucial for understanding the platform's dynamics.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

- C++ Compiler (e.g., GCC)
- CMake for building the project
- ROS (Robot Operating System), if integrating with ROS nodes
- Sensor SDKs/drivers for your specific LiDARs, camera, and IMU

### Installing

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/sensor-fusion-slam.gi
