#include "sensor.h"
#include "sensorfusion.h"
class LocalizeAndMap {
private:
    Lidar hLidar;
    Lidar vLidar;
    Camera camera;
    IMU imu;
    SensorFusion sensorFusion;

public:
    void initializeSensors();
    void synchronizeData();
    void performSensorFusion();
    void localizeAndMap() ;
};
