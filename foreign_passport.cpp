#include "foreign_passport.h"
#include <iostream>

ForeignPassport::ForeignPassport(const std::string& fullName, const std::string& passportNumber,
    const std::string& dateOfBirth, const std::string& passportCountry,
    const std::string& visaInfo)
    : Passport(fullName, passportNumber, dateOfBirth), passportCountry(passportCountry), visaInfo(visaInfo) {}

void ForeignPassport::displayInfo() const {
    Passport::displayInfo(); 
    std::cout << "Passport Country: " << passportCountry << "\nVisa Information: " << visaInfo << std::endl;
}
