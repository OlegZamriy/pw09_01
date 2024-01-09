#include "student.h"
#include <iostream>

Student::Student(const std::string& name, int age, const std::string& studentId)
    : name(name), age(age), studentId(studentId) {}

void Student::displayInfo() const {
    std::cout << "Name: " << name << "\nAge: " << age << "\nStudent ID: " << studentId << std::endl;
}
