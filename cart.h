#ifndef CART_H
#define CART_H

#include "transport.h"

class Cart : public Transport {
public:
    Cart(int passengerCapacity, int cargoCapacity);

    void calculateTimeAndCost(int passengers, int cargo) const override;
};

#endif // CART_H
