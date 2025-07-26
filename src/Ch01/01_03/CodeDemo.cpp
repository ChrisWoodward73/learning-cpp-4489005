// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 
// completed on 26th July 2025

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Hello, please enter your first name? " << std::flush;
    std::cin >> str;
    std::cout << "Thank you " << str << std::endl;
    std::cout << std::endl << std:: endl;
    return (0);
}
