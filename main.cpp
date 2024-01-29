// main.cpp
#include "simulation.cpp"
#include "Missile.cpp"
#include "Space.cpp"
#include "MissileLauncher.cpp"
#include "RadarBattery.cpp"
#include "ThreatObject.cpp"
#include "RadarSystem.cpp"
#include <iostream>

#include <iostream>
#include "MissileLauncher.hpp"

#include <iostream>

#include <iostream>

#include <iostream>
// Create the projection grid
char projection[70][150] = {' '};
// Define the size of the projection area
const int projectionWidth = 150;
const int projectionHeight = 70;
void printRocketProjection(double x, double y)
{

    // Scale factor for converting real coordinates to projection coordinates
    const double scaleFactor = 2;

    // Calculate the projected X and Y coordinates (scaling and offset)
    int projX = static_cast<int>(x * scaleFactor);
    int projY = projectionHeight - static_cast<int>(y);

    // Check if the rocket is out of bounds for the projection area
    if (projX < 0 || projX >= projectionWidth || projY < 0 || projY >= projectionHeight)
    {
        // std::cout << "Rocket out of bounds for projection area." << std::endl;
        return;
    }

    // Place the rocket symbol in the projection grid
    projection[projY][projX] = 'o'; // Symbol representing the rocket
}

int main()
{
    // Create a missile launcher
    MissileLauncher launcher(0, 0, 0, (75 * M_PI / 180), (0 * M_PI / 180)); // Assuming initial position is (0, 0, 1000) and orientation is 45 degrees

    // Launch a missile
    launcher.launchMissile(70, (75 * M_PI / 180), (0 * M_PI / 180), 1, 1, 10); // Assuming speed is 500 m/s, direction is 45 degrees, and dimensions are 1x1x10 meters

    // Continuously update and print missile's position until it hits the ground
        const std::vector<Missile> &missiles = launcher.getMissiles();
    for (int i = 0; i < 200; i++)
    {
        /* code */

        // Update missile's position
        launcher.updateMissiles();

        // Print missile's position
        
            std:: cout << "X: " << missiles[0].getX() << "  Speed: "<< missiles[0].getSpeed() << "\n";
        // for (const Missile &missile : missiles)
        // {
        //     // std::cout << "Rocket position: (" << missile.getX() << ", " << missile.getY() << ", " << missile.getZ() << ")" << "Speed: " << missile.getSpeed() << std::endl;
        //     printRocketProjection(missile.getX(), missile.getZ());
        // }
        if (missiles[0].hasHitGround())
        {
            // // Print the projection grid
            // for (int row = 0; row < projectionHeight; ++row)
            // {
            //     for (int col = 0; col < projectionWidth; ++col)
            //     {
            //         std::cout << projection[row][col] << " ";
            //     }
            //     std::cout << std::endl;
            // }

            std:: cout << missiles[0].getSpeed() << "\n";
            std:: cout << missiles[0].getTimeTraveled();
            break;
        }

        // Add some delay between updates (optional)
        // std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
