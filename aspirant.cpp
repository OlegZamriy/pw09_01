#include "aspirant.h"
#include <iostream>

Aspirant::Aspirant(const std::string& name, int age, const std::string& studentId, const std::string& researchTopic)
    : Student(name, age, studentId), researchTopic(researchTopic) {}

void Aspirant::displayInfo() const {
    Student::displayInfo(); 
    std::cout << "Research Topic: " << researchTopic << std::endl;
}
