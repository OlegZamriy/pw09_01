#ifndef ASPIRANT_H
#define ASPIRANT_H

#include "student.h"

class Aspirant : public Student {
public:
    Aspirant(const std::string& name, int age, const std::string& studentId, const std::string& researchTopic);

    void displayInfo() const; // Перевизначення методу displayInfo

private:
    std::string researchTopic;
};

#endif // ASPIRANT_H
