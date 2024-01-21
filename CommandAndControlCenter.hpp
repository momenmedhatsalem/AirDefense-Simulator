// CommandAndControlCenter.hpp
#ifndef COMMAND_AND_CONTROL_CENTER_HPP
#define COMMAND_AND_CONTROL_CENTER_HPP

#include "RadarSystem.hpp"
#include "MissileLauncher.hpp"

class CommandAndControlCenter {
public:
    CommandAndControlCenter(RadarSystem& radar, MissileLauncher& launcher);
    void processThreats();
    // Add other methods and member variables as needed

private:
    RadarSystem& radarSystem_;
    MissileLauncher& missileLauncher_;
};

#endif // COMMAND_AND_CONTROL_CENTER_HPP
