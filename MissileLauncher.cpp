#include "MissileLauncher.hpp"
#include <algorithm>

MissileLauncher::MissileLauncher(double x, double y, double z, double verical_orientation, double horizontal_orientation)
    : x_(x), y_(y), z_(z), vertical_orientation_(verical_orientation), horizontal_orientation_(horizontal_orientation) {}

void MissileLauncher::launchMissile(double speed, double verical_orientation, double horizontal_orientation, double width, double height, double length) {
    // Create a new missile and add it to the missiles vector
    missiles_.emplace_back(x_, y_, z_, speed, vertical_orientation_, horizontal_orientation, width, height, length);
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
    return vertical_orientation_;
}

const std::vector<Missile>& MissileLauncher::getMissiles() const {
    return missiles_;
}
