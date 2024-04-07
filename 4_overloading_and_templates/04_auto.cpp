#include <iostream>
#include <vector>

int main () {
    std::vector<std::string> string_vector = {"First", "Second"};

    for (auto& string : string_vector) {
        std::cout << string << std::endl;
    }
}