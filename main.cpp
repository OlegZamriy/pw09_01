#include "dog.h"
#include "cat.h"
#include "parrot.h"
#include <iostream>

int main() {
    Dog dog("Buddy", "Golden Retriever", 3, "Playing fetch");
    Cat cat("Whiskers", "Persian", 2, true);
    Parrot parrot("Polly", "Ara", 5, "Hello, world!");

    std::cout << "Dog Info:\n";
    dog.displayInfo();

    std::cout << "\nCat Info:\n";
    cat.displayInfo();

    std::cout << "\nParrot Info:\n";
    parrot.displayInfo();

    return 0;
}
