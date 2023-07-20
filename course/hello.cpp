#include <iostream>
#include <string>

int main() {
    std::string name;

    // Ask the user for their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Greet the user with a personalized message
    std::cout << "Hello, " << name << "! Welcome to the Dockerized C++ Application!" << std::endl;

    return 0;
}

