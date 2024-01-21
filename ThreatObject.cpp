// ThreatObject.cpp
#include "ThreatObject.hpp"

ThreatObject::ThreatObject(double x, double y, double z, double speed, double direction, 
                           double width, double height, double length, const std::string& type)
    : x_(x), y_(y), z_(z), speed_(speed), direction_(direction), 
      width_(width), height_(height), length_(length), type_(type) {}

void ThreatObject::updatePosition() {
    // Update position based on speed and direction
    // ...
}

double ThreatObject::getX() const {
    return x_;
}

double ThreatObject::getY() const {
    return y_;
}

double ThreatObject::getZ() const {
    return z_;
}

double ThreatObject::getSpeed() const {
    return speed_;
}

double ThreatObject::getDirection() const {
    return direction_;
}

double ThreatObject::getWidth() const {
    return width_;
}

double ThreatObject::getHeight() const {
    return height_;
}

double ThreatObject::getLength() const {
    return length_;
}

const std::string& ThreatObject::getType() const {
    return type_;
}
