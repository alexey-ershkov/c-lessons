#include <iostream>
 
int main() {
    int age;  // объявляем переменную age

    std::cout << "What is your age?" << std::endl;
    std::cin >> age;  // считываем её значение с клавиатуры
    std::cout << "Your are " << age << " years old!" << std::endl;
}
