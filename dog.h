#ifndef DOG_H
#define DOG_H

#include "domestic_animal.h"

class Dog : public DomesticAnimal {
public:
    Dog(const std::string& name, const std::string& breed, int age, const std::string& favoriteActivity);

    void displayInfo() const override;

private:
    std::string favoriteActivity;
};

#endif // DOG_H
