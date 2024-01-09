#ifndef TRANSPORT_H
#define TRANSPORT_H

class Transport {
public:
    Transport(int passengerCapacity, int cargoCapacity);

    virtual void calculateTimeAndCost(int passengers, int cargo) const = 0; 

protected:
    int passengerCapacity;
    int cargoCapacity;
};

#endif // TRANSPORT_H
