#include <iostream>

class LidarData {
    // LiDAR data members
};

// Abstract representation of data from Camera
class CameraData {
    // Camera data members
};

// Abstract representation of fused data
class FusedData {
    // Fused data members
};
// Abstract representation of data from IMU
class IMUData {
    // IMU data members
};

// Derived class for IMU sensor
class IMU : public Sensor {
private:
    IMUData data;

public:
    void captureData() override;
    void preprocessData() override;
    IMUData getData();
};

// Base class for a sensor (Lidar or Camera)
class Sensor {
public:
    virtual void captureData() = 0;
    virtual void preprocessData() = 0;
};

// Derived class for Lidar sensor
class Lidar : public Sensor {
private:
    LidarData data;

public:
    void captureData() override;
    void preprocessData() override;
    LidarData getData();
};

// Derived class for Camera
class Camera : public Sensor {
private:
    CameraData data;

public:
    void captureData() override;
    void preprocessData() override;
    CameraData getData();
};
