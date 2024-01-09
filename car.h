#ifndef CAR_H
#define CAR_H

#include "transport.h"

class Car : public Transport {
public:
    Car(int passengerCapacity, int cargoCapacity, int fuelEfficiency);

    void calculateTimeAndCost(int passengers, int cargo) const override;

private:
    int fuelEfficiency;
};

#endif // CAR_H
