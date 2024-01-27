// Missile.cpp
#include "Missile.hpp"
#include <cmath>   // for sin, cos
// Include necessary headers for platform-specific sleep functions
#ifdef _WIN32
#include <windows.h> // For Sleep function on Windows
#else
#include <unistd.h> // For sleep function on Unix-like systems
#endif
#include <chrono>  // for std::chrono::seconds

Missile::Missile(double x, double y, double z, double speed, double direction, double width, double height, double length)
    : x_(x), y_(y), z_(z), speed_(speed), direction_(direction), width_(width), height_(height), length_(length),
      distanceTraveled_(0), hasHitTarget_(false), hasHitGround_(false), targetX_(0), targetY_(0) {}



void Missile::updatePosition() {
    // Update the position every second based on speed, angle, and altitude
    while (!hasHitTarget_ && !hasHitGround_) {
        // Calculate the distance traveled during the past second
        double distanceTraveled = speed_ * cos(direction_) * 1.0; // Assuming speed is in m/s

        // Update the position
        double deltaX = distanceTraveled * cos(direction_); // Update x position
        double deltaY = distanceTraveled * sin(direction_); // Update y position

        // Update altitude if needed (altitude change per second)
        const double g = 9.81; // Acceleration due to gravity in m/s²
        z_ -= speed_ * timeTraveled_ * sin(direction_) - 0.5 * g * pow(timeTraveled_, 2);/* altitude change per second */
  
        // Update position
        x_ += deltaX;
        y_ += deltaY;

        // Check if the missile has hit the ground
        if (z_ <= 0) {
            hasHitGround_ = true;
            break; // Exit the loop if the missile has hit the ground
        }


        timeTraveled_ += 1;
                // Sleep for one second before the next update
        #ifdef _WIN32
                Sleep(1000); // Sleep for 1000 milliseconds (1 second) on Windows
        #else
                sleep(1); // Sleep for 1 second on Unix-like systems
        #endif
    }
}


double Missile::getX() const {
    return x_;
}

double Missile::getY() const {
    return y_;
}

double Missile::getZ() const {
    return z_;
}

double Missile::getSpeed() const {
    return speed_;
}

double Missile::getDirection() const {
    return direction_;
}

double Missile::getWidth() const {
    return width_;
}

double Missile::getHeight() const {
    return height_;
}

double Missile::getLength() const {
    return length_;
}

double Missile::getDistanceTraveled() const {
    return distanceTraveled_;
}

bool Missile::hasHitTarget() const {
    return hasHitTarget_;
}

bool Missile::hasHitGround() const {
    return hasHitGround_;
}

void Missile::setTargetCoordinates(double targetX, double targetY) {
    targetX_ = targetX;
    targetY_ = targetY;
}
double Missile::getTimeTraveled() const {
    return timeTraveled_;
}