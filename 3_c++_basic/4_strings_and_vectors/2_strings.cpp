#include <iostream>
#include <string>
 
int main() {
    std::string s = "Some string";
 
    // приписывание символов и строк
    s += ' ';  // добавляем отдельный символ в конец, это аналог push_back
    s += "functions";  // добавляем строку в конец
    std::cout << s << "\n";  // Some string functions
 
    // выделение подстроки
    // подстрока "string" из 6 символов начиная с 5-й позиции
    std::string sub1 = s.substr(5, 6);
    std::cout << sub1 << std::endl;
    // подстрока "functions" с 12-й позиции и до конца
    std::string sub2 = s.substr(12);
    std::cout << sub2 << std::endl;
 
    // поиск символа или подстроки
    size_t pos1 = s.find(' ');  // позиция первого пробела, в данном случае 4
    size_t pos2 = s.find(' ', pos1 + 1);  // позиция следующего пробела (11)
    size_t pos3 = s.find("str");  
    size_t pos4 = s.find("#");  

    std::cout << pos1 << " "  << pos2 << " "  << pos3 << " "  << pos4 << std::endl;

 
    // modify
    // вставка подстроки
    s.insert(5, "std::");
    std::cout << s << std::endl;  // Some std::string functions
 
    // замена указанного диапазона на новую подстроку
    s.replace(0, 4, "Special");
    std::cout << s << std::endl;  // Special std::string functions
 
    // удаление подстроки
    s.erase(8, 5);  // Special string functions
    std::cout << s << std::endl;
}