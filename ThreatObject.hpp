// ThreatObject.hpp
#ifndef THREAT_OBJECT_HPP
#define THREAT_OBJECT_HPP

#include <string>

class ThreatObject {
public:
    ThreatObject(double x, double y, double z, double speed, double direction, 
                 double width, double height, double length, const std::string& type);
    
    void updatePosition();
    
    // Getters for properties
    double getX() const;
    double getY() const;
    double getZ() const;
    double getSpeed() const;
    double getDirection() const;
    double getWidth() const;
    double getHeight() const;
    double getLength() const;
    const std::string& getType() const;

private:
    double x_;
    double y_;
    double z_;
    double speed_;
    double direction_;
    double width_;
    double height_;
    double length_;
    std::string type_;
};

#endif // THREAT_OBJECT_HPP
