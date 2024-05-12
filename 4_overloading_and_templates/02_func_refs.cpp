#include <iostream>

void can_modify(int &data) {
    data++;
}

void print_int(const int &data) {
    std::cout << data << std::endl;
}

int main () {
    int x = 42;

    print_int(x);
    can_modify(x);
    std::cout << x << std::endl;
}