#include <iostream>
#include <string>

int main() {
    std::string firstName;
    
    std::cout << "Please enter your first name: ";
    std::cin >> firstName;
    
    std::cout << "Hello, " << firstName << "! Welcome to the world of C++!\n";
    
    return 0;
}
