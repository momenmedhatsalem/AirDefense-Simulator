// main.cpp
#include "simulation.cpp"
#include <iostream>

int main() {
    const char* parameters = "your_simulation_parameters_here";
    int result = performAirDefenseSimulation(parameters);
    std::cout << "Simulation Result: " << result << std::endl;
    return 0;
}
