#include "passport.h"
#include <iostream>

Passport::Passport(const std::string& fullName, const std::string& passportNumber, const std::string& dateOfBirth)
    : fullName(fullName), passportNumber(passportNumber), dateOfBirth(dateOfBirth) {}

void Passport::displayInfo() const {
    std::cout << "Full Name: " << fullName << "\nPassport Number: " << passportNumber
        << "\nDate of Birth: " << dateOfBirth << std::endl;
}
