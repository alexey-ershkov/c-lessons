#include <iostream>
#include <string>
 
int main() {
    std::string line;
    std::getline(std::cin, line);
    
    for (char symbol : line) {
        std::cout << symbol << std::endl;
    }
}