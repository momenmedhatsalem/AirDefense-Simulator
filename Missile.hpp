// Missile.hpp
#ifndef MISSILE_HPP
#define MISSILE_HPP

#include <cmath>

class Missile {
public:
    Missile(double x, double y, double z, double speed, double direction, double width, double height, double length);

    void updatePosition();

    double getX() const;
    double getY() const;
    double getZ() const;
    double getSpeed() const;
    double getDirection() const;
    double getWidth() const;
    double getHeight() const;
    double getLength() const;
    double getDistanceTraveled() const;
    bool hasHitTarget() const; // Check if the missile has hit the target
    bool hasHitGround() const; // Check if the missile has hit the ground
    double getTimeTraveled() const;

    // Set the target coordinates
    void setTargetCoordinates(double targetX, double targetY);

private:
    double x_;
    double y_;
    double z_;
    double speed_;
    double direction_; // Angle in radians
    double width_;
    double height_;
    double length_;
    double distanceTraveled_;
    bool hasHitTarget_;
    bool hasHitGround_;
    double targetX_; // Target coordinates
    double targetY_;
    double timeTraveled_;
};

#endif // MISSILE_HPP
