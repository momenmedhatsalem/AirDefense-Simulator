// Space.hpp
#ifndef SPACE_HPP
#define SPACE_HPP

#include "ThreatObject.hpp"
#include "RadarSystem.hpp"

#include <vector>

class Space {
public:
    Space(double width, double height, double depth);

    void addThreat(const ThreatObject& threat);
    void addRadarSystem(const RadarSystem& radarSystem);

    void simulateAirDefense();

private:
    double width_;
    double height_;
    double depth_;
    std::vector<ThreatObject> threats_;
    std::vector<RadarSystem> radarSystems_;
};

#endif // SPACE_HPP
