#include <iostream>
#include <vector>
 
int main() {
    int variable = 1; // значение
    int *variable_address = &variable; // адрес

    std::cout << variable << " " << variable_address << std::endl;

    std::string copy_string_src = "Elementary, my dear Watson!";
    std::string copy_string = copy_string_src;

    copy_string_src.clear();  // s2 никак не изменится
 
    std::cout << "copy string src:" << copy_string_src << std::endl;  // пустая строка
    std::cout << "copy string:" << copy_string << std::endl;  // Elementary, my dear Watson!


    

    int x = 42;
    int& reference = x;  // ссылка на x
 
    ++x;
    std::cout << reference << " " << &x << " " << &reference << std::endl;  // 43


    std::string ref_string_src = "Elementary, my dear Watson!";
    std::string &ref_string = ref_string_src;

    ref_string_src.clear();  
 
    std::cout << "ref string src: " << ref_string_src << std::endl;  // пустая строка
    std::cout << "ref string: " << ref_string << std::endl;  // пустая строка
}
