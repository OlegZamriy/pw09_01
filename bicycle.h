#ifndef BICYCLE_H
#define BICYCLE_H

#include "transport.h"

class Bicycle : public Transport {
public:
    Bicycle(int passengerCapacity, int cargoCapacity);

    void calculateTimeAndCost(int passengers, int cargo) const override;
};

#endif // BICYCLE_H
