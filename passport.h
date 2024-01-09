#ifndef PASSPORT_H
#define PASSPORT_H

#include <string>

class Passport {
public:
    Passport(const std::string& fullName, const std::string& passportNumber, const std::string& dateOfBirth);

    void displayInfo() const;

protected:
    std::string fullName;
    std::string passportNumber;
    std::string dateOfBirth;
};

#endif // PASSPORT_H
#pragma once
