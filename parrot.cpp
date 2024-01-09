#include "parrot.h"
#include <iostream>

Parrot::Parrot(const std::string& name, const std::string& breed, int age, const std::string& favoritePhrase)
    : DomesticAnimal(name, breed, age), favoritePhrase(favoritePhrase) {}

void Parrot::displayInfo() const {
    DomesticAnimal::displayInfo(); 
    std::cout << "Favorite Phrase: " << favoritePhrase << std::endl;
}
