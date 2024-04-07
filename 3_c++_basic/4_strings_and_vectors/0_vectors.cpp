#include <iostream>
#include <string>
#include <vector>

void printIntVector(std::vector<int> vec) {
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

}

void printStringVector(std::vector<std::string> vec) {
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec.at(i) << " ";
    }
    std::cout << std::endl;

}
 
int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    printIntVector(data);


    std::vector<std::string> v1;  // пустой вектор строк
    std::vector<std::string> v2(5);  // вектор из пяти пустых строк
    std::vector<std::string> v3(5, "hello");  // вектор из пяти строк "hello

    printStringVector(v3);

    // props
    // получить элемент массива
    std::cout << data[0] << " " << data.at(0) << std::endl;
    // получить длину массива
    std::cout << "data size is " << data.size() << ", v3 size is " << v3.size() << std::endl;

    // получить первый (front) и последний (back) элементы массива
    std::cout << "front is " << data.front() << ", back is " << data.back() << std::endl;

    // получить информацию пустой ли массив
    std::cout << "data vector empty " << data.empty() << ", v2 vector empty is " << v2.empty() << std::endl;

    // add and delete

    // Добавление в массив в конец
    data.push_back(7);
    printIntVector(data);

    while (data.size() > 2) {
        // Удаление с конца массива
        data.pop_back();
    }

    printIntVector(data);

    // sort

    std::vector<int> data_for_sort = {3, 1, 4, 1, 5, 9, 2, 6};
 
    // Сортировка диапазона вектора от начала до конца
    std::sort(data_for_sort.begin(), data_for_sort.end());
    printIntVector(data_for_sort);
}
