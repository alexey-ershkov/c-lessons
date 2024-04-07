#include <iostream>
#include <string>

template <typename T> T get_max(T const x, T const y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}
 
int main() {
    std::cout << get_max<int>(1, 2) << std::endl;  // 2
    std::cout << get_max<float>(3.14159, 2.71828) << std::endl;   // 3.14159
 
    std::string word1 = "hello", word2 = "world";
    std::cout << get_max<std::string>(word1, word2) << std::endl;  // world
}