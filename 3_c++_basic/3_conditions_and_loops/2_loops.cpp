#include <iostream>
 
int main() {
    int n = 1;
    while (n <= 10) {
        std::cout << n * n << std::endl;  // выводим число и его квадрат через табуляцию
        ++n;
    }

    std::cout << std::endl;

    for(int i = 0; i < 10; ++i) {
        std::cout << n * n << std::endl;
    }
    std::cout << std::endl;
}