// AirDefenseSystem.cpp
#include "AirDefenseSystem.hpp"

AirDefenseSystem::AirDefenseSystem() : radarSystem_() {}

void AirDefenseSystem::runSimulation() {
    // Main simulation logic
    radarSystem_.detectThreats();
    const std::vector<ThreatObject>& threats = radarSystem_.getDetectedThreats();
    // Perform actions based on detected threats
    // ...
}
