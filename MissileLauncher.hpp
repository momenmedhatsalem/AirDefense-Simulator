// MissileLauncher.hpp
#ifndef MISSILE_LAUNCHER_HPP
#define MISSILE_LAUNCHER_HPP

#include "Missile.hpp"
#include <vector>

class MissileLauncher {
public:
    MissileLauncher(double x, double y, double z, double orientation);

    void launchMissile(double speed, double direction, double width, double height, double length);
    void updateMissiles();

    double getX() const;
    double getY() const;
    double getZ() const;
    double getOrientation() const;
    const std::vector<Missile>& getMissiles() const;

private:
    double x_;
    double y_;
    double z_;
    double orientation_; // Angle in degrees
    std::vector<Missile> missiles_;
};

#endif // MISSILE_LAUNCHER_HPP
