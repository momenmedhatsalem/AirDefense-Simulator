// RadarBattery.cpp
#include "RadarBattery.hpp"

RadarBattery::RadarBattery(double x, double y, double z, double coverageRadius)
    : x_(x), y_(y), z_(z), coverageRadius_(coverageRadius) {}

void RadarBattery::detectThreats(const std::vector<ThreatObject>& allThreats) {
    // Clear previous detected threats
    detectedThreats_.clear();

    // Simulated logic to detect threats within the coverage area
    for (const ThreatObject& threat : allThreats) {
        double distanceSquared = (threat.getX() - x_) * (threat.getX() - x_) +
                                 (threat.getY() - y_) * (threat.getY() - y_) +
                                 (threat.getZ() - z_) * (threat.getZ() - z_);

        if (distanceSquared <= coverageRadius_ * coverageRadius_) {
            // Threat is within the coverage area of the radar battery
            detectedThreats_.push_back(threat);
        }
    }
}

const std::vector<ThreatObject>& RadarBattery::getDetectedThreats() const {
    return detectedThreats_;
}
