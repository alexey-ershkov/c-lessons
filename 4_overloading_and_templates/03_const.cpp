#include <iostream>
#include <vector>
 
int main() {
    const int int_const = 42;  // эта константа известна в compile time
 
    int_const = 0;  // ошибка компиляции: константе нельзя присвоить новое значение

    const std::vector<int> int_vector = {1, 3, 5};
    std::cout << int_vector.size() << "\n";  // OK, напечатает 3
    int_vector.clear();  // ошибка компиляции: константный вектор нельзя изменять
    int_vector[0] = 0;  // тоже ошибка компиляции

    int x = 42;
 
    int &x_reference = x;  // обычная ссылка
    const int &x_reference_const = x;  // константная ссылка
    ++x;  // OK
    ++x_reference;  // OK
    ++x_reference_const;  // ошибка компиляции: псевдоним cref предназначен только для чтения
}