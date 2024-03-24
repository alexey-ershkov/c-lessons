#include <iostream>
#include <string>
 
int main() {
    std::string fullName; 
    std::cout << "What is your fullName?" << std::endl;
    

    // std::cin >> fullName;
    std::getline(std::cin, fullName);
    std::cout << "Hello, " << fullName << "!" << std::endl;
}
