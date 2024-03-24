#include <iostream>
#include <vector>
 
int main() {
    std::vector<int> data = {1, 2};
    std::cout << data.size() << "\t" << data.capacity() << std::endl;
 
    data.push_back(3);
    std::cout << data.size() << "\t" << data.capacity() << std::endl;
 
    data.push_back(4);
    std::cout << data.size() << "\t" << data.capacity() << std::endl;
 
    data.push_back(5);
    std::cout << data.size() << "\t" << data.capacity() << std::endl;


    //reserve
    std::vector<std::string> words;
 
    size_t words_count;
    std::cin >> words_count;
 
    // Размер вектора остаётся нулевым, меняется только резерв:
    words.reserve(words_count);
 
    for (size_t i = 0; i != words_count; ++i) {
        std::string word;
        std::cin >> word;
        // Все добавления будут дешёвыми, без реаллокаций:
        words.push_back(word);
    }
}