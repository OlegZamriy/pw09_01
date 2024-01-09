#include "car.h"
#include <iostream>

Car::Car(int passengerCapacity, int cargoCapacity, int fuelEfficiency)
    : Transport(passengerCapacity, cargoCapacity), fuelEfficiency(fuelEfficiency) {}

void Car::calculateTimeAndCost(int passengers, int cargo) const {
    int time = passengers * fuelEfficiency;
    int cost = (passengers + cargo) * fuelEfficiency;

    std::cout << "Car Time: " << time << " hours\n";
    std::cout << "Car Cost: $" << cost << std::endl;
}
