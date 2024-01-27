// main.cpp
#include "simulation.cpp"
#include "Missile.cpp"
#include "Space.cpp"
#include "MissileLauncher.cpp"
#include "RadarBattery.cpp"
#include "ThreatObject.cpp"
#include "RadarSystem.cpp"
#include <iostream>

int main() {
    const char* parameters = "your_simulation_parameters_here";
    int result = performAirDefenseSimulation(parameters);
    std::cout << "Simulation Result: " << result << std::endl;
    return 0;
}
