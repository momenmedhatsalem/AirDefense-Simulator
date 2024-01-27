#include "MissileLauncher.hpp"
#include <algorithm>

MissileLauncher::MissileLauncher(double x, double y, double z, double orientation)
    : x_(x), y_(y), z_(z), orientation_(orientation) {}

void MissileLauncher::launchMissile(double speed, double direction, double width, double height, double length) {
    // Create a new missile and add it to the missiles vector
    missiles_.emplace_back(x_, y_, z_, speed, direction + orientation_, width, height, length);
}

void MissileLauncher::updateMissiles() {
    // Update the position of all launched missiles
    for (Missile& missile : missiles_) {
        missile.updatePosition();
    }

    // Remove missiles that are out of bounds or have completed their mission
    missiles_.erase(
        std::remove_if(
            missiles_.begin(),
            missiles_.end(),
            [this](const Missile& missile) { // Capture 'this' pointer to access member function
                // Remove the missile if it has traveled more than 1000 units
                return missile.getDistanceTraveled() > 1000; // Call member function to get distance traveled
            }),
        missiles_.end());
}

double MissileLauncher::getX() const {
    return x_;
}

double MissileLauncher::getY() const {
    return y_;
}

double MissileLauncher::getZ() const {
    return z_;
}

double MissileLauncher::getOrientation() const {
    return orientation_;
}

const std::vector<Missile>& MissileLauncher::getMissiles() const {
    return missiles_;
}
