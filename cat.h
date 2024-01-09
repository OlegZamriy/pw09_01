#ifndef CAT_H
#define CAT_H

#include "domestic_animal.h"

class Cat : public DomesticAnimal {
public:
    Cat(const std::string& name, const std::string& breed, int age, bool hasWhiskers);

    void displayInfo() const override;

private:
    bool hasWhiskers;
};

#endif // CAT_H
