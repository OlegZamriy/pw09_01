#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string& name, int age, const std::string& studentId);

    void displayInfo() const;

protected:
    std::string name;
    int age;
    std::string studentId;
};

#endif // STUDENT_H
#pragma once
