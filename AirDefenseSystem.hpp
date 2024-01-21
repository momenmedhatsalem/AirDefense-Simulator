// AirDefenseSystem.hpp
#ifndef AIR_DEFENSE_SYSTEM_HPP
#define AIR_DEFENSE_SYSTEM_HPP

#include "RadarSystem.hpp"

class AirDefenseSystem {
public:
    AirDefenseSystem();
    void runSimulation();

private:
    RadarSystem radarSystem_;
};

#endif // AIR_DEFENSE_SYSTEM_HPP
