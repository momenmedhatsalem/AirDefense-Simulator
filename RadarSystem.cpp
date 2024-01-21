// RadarSystem.cpp
#include "RadarSystem.hpp"

void RadarSystem::addRadarBattery(double x, double y, double z, double coverageRadius) {
    radarBatteries_.emplace_back(x, y, z, coverageRadius);
}

void RadarSystem::detectThreats(const std::vector<ThreatObject>& allThreats) {
    // Clear previous detected threats
    detectedThreats_.clear();

    // Iterate through each radar battery and detect threats
    for (const RadarBattery& battery : radarBatteries_) {
        battery.detectThreats(allThreats);
        // Merge the detected threats from each battery into the overall list
        detectedThreats_.insert(detectedThreats_.end(), battery.getDetectedThreats().begin(), battery.getDetectedThreats().end());
    }
}

const std::vector<ThreatObject>& RadarSystem::getDetectedThreats() const {
    return detectedThreats_;
}
