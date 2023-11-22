#pragma once
#include "localizeandmap.h"

int main() {
    LocalizeAndMap system;
    system.initializeSensors();
    system.synchronizeData();
    system.performSensorFusion();
    system.localizeAndMap();

    return 0;
}