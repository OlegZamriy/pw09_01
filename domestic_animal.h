#ifndef DOMESTIC_ANIMAL_H
#define DOMESTIC_ANIMAL_H

#include <string>

class DomesticAnimal {
public:
    DomesticAnimal(const std::string& name, const std::string& breed, int age);

    virtual void displayInfo() const;

protected:
    std::string name;
    std::string breed;
    int age;
};

#endif // DOMESTIC_ANIMAL_H
