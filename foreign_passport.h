#ifndef FOREIGN_PASSPORT_H
#define FOREIGN_PASSPORT_H

#include "passport.h"
#include <string>

class ForeignPassport : public Passport {
public:
    ForeignPassport(const std::string& fullName, const std::string& passportNumber, const std::string& dateOfBirth,
        const std::string& passportCountry, const std::string& visaInfo);

    void displayInfo() const; // Перевизначення методу displayInfo

private:
    std::string passportCountry;
    std::string visaInfo;
};

#endif // FOREIGN_PASSPORT_H
#pragma once
