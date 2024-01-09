#include "cat.h"
#include <iostream>

Cat::Cat(const std::string& name, const std::string& breed, int age, bool hasWhiskers)
    : DomesticAnimal(name, breed, age), hasWhiskers(hasWhiskers) {}

void Cat::displayInfo() const {
    DomesticAnimal::displayInfo(); 
    std::cout << "Has Whiskers: " << (hasWhiskers ? "Yes" : "No") << std::endl;
}
