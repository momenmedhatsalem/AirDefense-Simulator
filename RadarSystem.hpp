// RadarSystem.hpp
#ifndef RADAR_SYSTEM_HPP
#define RADAR_SYSTEM_HPP

#include "RadarBattery.hpp"
#include <vector>

class RadarSystem {
public:
    void addRadarBattery(double x, double y, double z, double coverageRadius);
    void detectThreats(const std::vector<ThreatObject>& allThreats);

    const std::vector<ThreatObject>& getDetectedThreats() const;

private:
    std::vector<RadarBattery> radarBatteries_;
    std::vector<ThreatObject> detectedThreats_;
};

#endif // RADAR_SYSTEM_HPP
