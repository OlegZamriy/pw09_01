#include "car.h"
#include "bicycle.h"
#include "cart.h"
#include <iostream>

int main() {
    Car car(4, 2, 10); 
    Bicycle bicycle(1, 0); 
    Cart cart(2, 4); // 

    car.calculateTimeAndCost(3, 1);
    std::cout << "\n";
    bicycle.calculateTimeAndCost(1, 0);
    std::cout << "\n";
    cart.calculateTimeAndCost(2, 3);

    return 0;
}
