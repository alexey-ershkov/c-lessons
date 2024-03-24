#include <iostream>
#include <string>

namespace myCustomNamespace {
    std::string name = "Alex";

    void print_hello(std::string member_name) {
        std::cout << "Hello, " << member_name << std::endl;
    }
}

int main () { 
    std::cout << myCustomNamespace::name << std::endl;

    myCustomNamespace::print_hello("Anton");
}