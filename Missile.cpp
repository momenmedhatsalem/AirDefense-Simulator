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
#include <iostream>
Missile::Missile(double x, double y, double z, double speed, double vertical_angle, double horizontal_angle, double width, double height, double length)
    : x_(x), y_(y), z_(z), speed_(speed), timeTraveled_(0), vertical_angle_(vertical_angle), horizontal_angle_(horizontal_angle), width_(width), height_(z), length_(length),
      distanceTraveled_(0), hasHitTarget_(false), hasHitGround_(false), targetX_(0), targetY_(0) {
                // Horizontal component of initial speed
         vi_x = speed_ * cos(vertical_angle_);
        // Vertical component of intial speed
         vi_y = speed_  * sin(vertical_angle_);
      }



void Missile::updatePosition() {


    // Update the position every second based on speed, angle, and altitude
        timeTraveled_ += 0.1;
        // Calculate the distance traveled during the past second
        double distanceTraveled = vi_x * timeTraveled_ * 1.0; // Assuming speed is in m/s
        // Update the position
        x_ = distanceTraveled * cos(horizontal_angle_); // Update x position
        double deltaY = distanceTraveled * sin(horizontal_angle_); // Update y position

        // Update altitude if needed (altitude change per second)
        const double g = 9.8; // Acceleration due to gravity in m/s²
        z_ = ((vi_y * timeTraveled_) - 0.5 * g * pow(timeTraveled_, 2)) + height_;/* altitude change per second */
  


        y_ += deltaY;
        current_speed_ = sqrt(pow(vi_x, 2) + pow((vi_y - g *timeTraveled_), 2));
        // Check if the missile has hit the ground
        if (z_ <= 0 && timeTraveled_ > 0) {
            z_ = 0;
            hasHitGround_ = true;
            
        }

        distanceTraveled_ = distanceTraveled_; // Assuming speed is in m/s
        //std::cout<< current_speed_ <<"\n";

        

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
    return current_speed_;
}

double Missile::getDirection() const {
    return vertical_angle_;
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