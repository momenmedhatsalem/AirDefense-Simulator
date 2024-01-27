// ControlAndCommandCenter.hpp
#ifndef COMMAND_AND_CONTROL_CENTER_HPP
#define COMMAND_AND_CONTROL_CENTER_HPP

#include "MissileLauncher.hpp"
#include "RadarSystem.hpp"
#include "Space.hpp"

class ControlAndCommandCenter {
public:
    ControlAndCommandCenter();

    void addMissileLauncher(const MissileLauncher& missileLauncher);
    void addRadarSystem(const RadarSystem& radarSystem);

    void simulateAirDefense();

private:
    std::vector<MissileLauncher> missileLaunchers_;
    std::vector<RadarSystem> radarSystems_;
    Space space_;
};

#endif // CONTROL_AND_COMMAND_CENTER_HPP
