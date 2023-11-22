#include "sensor.h"
class SensorFusion {
public:
    FusedData fuseData(const LidarData& hLidar, const LidarData& vLidar, const CameraData& cameraData);
    SensorFusion();
};