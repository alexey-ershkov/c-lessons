#include <iostream>
 
int main() {
    int a, b;
    char operation;
    std::cin >> a >> operation >> b;
 
    int result = 0;
    if (operation == '+') {
        result = a + b;
    } else if (operation == '-') {
        result = a - b;
    } else if (operation == '*') {
        result = a * b;
    } else if (operation == '/' || operation == ':') {
        result = a / b;
    } else if (operation == '%') { 
        result = a % b;
    }
 
    std::cout << result << std::endl;
}