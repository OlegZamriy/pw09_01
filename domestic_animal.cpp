#include "domestic_animal.h"
#include <iostream>

DomesticAnimal::DomesticAnimal(const std::string& name, const std::string& breed, int age)
    : name(name), breed(breed), age(age) {}

void DomesticAnimal::displayInfo() const {
    std::cout << "Name: " << name << "\nBreed: " << breed << "\nAge: " << age << " years\n";
}
