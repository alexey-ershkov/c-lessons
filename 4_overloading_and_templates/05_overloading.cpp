#include <iostream>
#include <string>
 
void print(int value) {
    std::cout << value << "\n";
}
 
void print(const std::string& name, int value) {
    std::cout << name << ": " << value << "\n";  // печатаем название и саму величину
}
 
void print(const std::string& str) {
    std::cout << str << "\n";
}
 
int main() {
    print(42);  // версия 1
    print("good bye", 42);  // версия 2
    print("good bye");  // версия 3
}
