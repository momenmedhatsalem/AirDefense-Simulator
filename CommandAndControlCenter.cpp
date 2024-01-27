
// CommandAndControlCenter.cpp
#include "CommandAndControlCenter.hpp"

ControlAndCommandCenter::ControlAndCommandCenter() : space_(1000.0, 1000.0, 1000.0) {} // Example: Set space dimensions

void ControlAndCommandCenter::addMissileLauncher(const MissileLauncher& missileLauncher) {
    missileLaunchers_.push_back(missileLauncher);
}

void ControlAndCommandCenter::addRadarSystem(const RadarSystem& radarSystem) {
    radarSystems_.push_back(radarSystem);
}

void ControlAndCommandCenter::simulateAirDefense() {
    // Implement air defense simulation logic here
    // This could involve coordination between missile launchers, radar systems, etc.

    // Example: Simulate missile launches and radar detections
    for (MissileLauncher& launcher : missileLaunchers_) {
        launcher.launchMissile(500.0, 45.0, 5.0, 2.0, 10.0); // Example values, adjust as needed
    }

    for (RadarSystem& radar : radarSystems_) {
        radar.detectThreats(space_.getThreats()); // Example: Pass threats from space
    }

    space_.simulateAirDefense(); // Example: Simulate overall air defense in the space
}
