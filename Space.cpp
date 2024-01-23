// Space.cpp
#include "Space.hpp"

Space::Space(double width, double height, double depth)
    : width_(width), height_(height), depth_(depth) {}

void Space::addThreat(const ThreatObject& threat) {
    threats_.push_back(threat);
}

void Space::addRadarSystem(const RadarSystem& radarSystem) {
    radarSystems_.push_back(radarSystem);
}

void Space::simulateAirDefense() {
    // Implement air defense simulation logic here
    // This could involve updating threat positions, radar detections, etc.
    // Use the ThreatObject and RadarSystem methods as needed.
}
