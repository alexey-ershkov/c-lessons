#include <iostream>

void print_int(int& data) {
    std::cout << data << std::endl;
}

int main () {
    int x = 42;

    print_int(x);
}