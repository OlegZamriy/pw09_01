#include "cart.h"
#include <iostream>

Cart::Cart(int passengerCapacity, int cargoCapacity) : Transport(passengerCapacity, cargoCapacity) {}

void Cart::calculateTimeAndCost(int passengers, int cargo) const {
    int time = passengers + cargo;
    int cost = (passengers + cargo) * 2; 

    std::cout << "Cart Time: " << time << " hours\n";
    std::cout << "Cart Cost: $" << cost << std::endl;
}
