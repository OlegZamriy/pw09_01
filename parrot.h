#ifndef PARROT_H
#define PARROT_H

#include "domestic_animal.h"

class Parrot : public DomesticAnimal {
public:
    Parrot(const std::string& name, const std::string& breed, int age, const std::string& favoritePhrase);

    void displayInfo() const override;

private:
    std::string favoritePhrase;
};

#endif // PARROT_H
