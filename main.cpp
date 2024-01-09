#include "passport.h"
#include "foreign_passport.h"
#include <iostream>

int main() {
    Passport passport("John Doe", "AB123456", "01-01-1990");
    ForeignPassport foreignPassport("Jane Smith", "CD789012", "05-10-1985", "USA", "Tourist Visa");

    std::cout << "Passport Info:\n";
    passport.displayInfo();

    std::cout << "\nForeign Passport Info:\n";
    foreignPassport.displayInfo();

    return 0;
}
