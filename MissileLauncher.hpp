// MissileLauncher.hpp
#ifndef MISSILE_LAUNCHER_HPP
#define MISSILE_LAUNCHER_HPP

#include "ThreatObject.hpp"
#include <vector>

class MissileLauncher {
public:
    MissileLauncher();
    void launchMissile(const ThreatObject& target);
    void updateMissileStatus();
    // Add other methods and member variables as needed

private:
    std::vector<Missile> missiles_;
};

#endif // MISSILE_LAUNCHER_HPP
