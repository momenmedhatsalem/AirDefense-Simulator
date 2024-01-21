// RadarBattery.hpp
#ifndef RADAR_BATTERY_HPP
#define RADAR_BATTERY_HPP

#include "ThreatObject.hpp"
#include <vector>

class RadarBattery {
public:
    RadarBattery(double x, double y, double z, double coverageRadius);
    void detectThreats(const std::vector<ThreatObject>& allThreats);

    const std::vector<ThreatObject>& getDetectedThreats() const;

private:
    double x_;
    double y_;
    double z_;
    double coverageRadius_;
    std::vector<ThreatObject> detectedThreats_;
};

#endif // RADAR_BATTERY_HPP
