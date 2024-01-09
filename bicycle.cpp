#include "bicycle.h"
#include <iostream>

Bicycle::Bicycle(int passengerCapacity, int cargoCapacity) : Transport(passengerCapacity, cargoCapacity) {}

void Bicycle::calculateTimeAndCost(int passengers, int cargo) const {
    int time = passengers;
    int cost = passengers;

    std::cout << "Bicycle Time: " << time << " hours\n";
    std::cout << "Bicycle Cost: $" << cost << std::endl;
}
