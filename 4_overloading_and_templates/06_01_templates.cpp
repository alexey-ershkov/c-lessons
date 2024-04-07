#include <iostream>
#include <string>
 
int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}
 
double max(double x, double y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}
 
std::string max(const std::string& x, const std::string& y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

// template <typename T>
// T Max(const T& x, const T& y) {
//     if (x > y) {
//         return x;
//     } else {
//         return y;
//     }
// }
 
int main() {
    std::cout << max(1, 2) << std::endl;  // 2
    std::cout << max(3.14159, 2.71828) << std::endl;   // 3.14159
 
    std::string word1 = "hello", word2 = "world";
    std::cout << max(word1, word2) << std::endl;  // world
}