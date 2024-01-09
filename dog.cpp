#include "dog.h"
#include <iostream>

Dog::Dog(const std::string& name, const std::string& breed, int age, const std::string& favoriteActivity)
    : DomesticAnimal(name, breed, age), favoriteActivity(favoriteActivity) {}

void Dog::displayInfo() const {
    DomesticAnimal::displayInfo();  
    std::cout << "Favorite Activity: " << favoriteActivity << std::endl;
}
