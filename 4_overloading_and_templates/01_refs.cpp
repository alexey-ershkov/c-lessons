#include <iostream>
 
int main() {
    std::string copy_string_src = "Elementary, my dear Watson!";
    std::string copy_string = copy_string_src;

    copy_string_src.clear();  // s2 никак не изменится
 
    std::cout << "copy string src:" << copy_string_src << "\n";  // пустая строка
    std::cout << "copy string:" << copy_string << "\n";  // Elementary, my dear Watson!


    int x = 42;
    int& reference = x;  // ссылка на x
 
    ++x;
    std::cout << reference << "\n";  // 43


    std::string ref_string_src = "Elementary, my dear Watson!";
    std::string& ref_string = ref_string_src;

    ref_string_src.clear();  // s2 никак не изменится
 
    std::cout << "ref string src: " << ref_string_src << "\n";  // пустая строка
    std::cout << "ref string: " << ref_string << "\n";  // Elementary, my dear Watson!
}