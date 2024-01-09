#include "student.h"
#include "aspirant.h"
#include <iostream>

int main() {
    Student student("John Doe", 20, "12345");
    Aspirant aspirant("Jane Smith", 25, "67890", "Machine Learning");

    std::cout << "Student Info:\n";
    student.displayInfo();

    std::cout << "\nAspirant Info:\n";
    aspirant.displayInfo();

    return 0;
}
