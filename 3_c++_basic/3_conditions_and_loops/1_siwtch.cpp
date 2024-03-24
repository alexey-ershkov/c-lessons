#include <iostream>
 
int main() {
    int a, b;
    char operation;
    std::cin >> a >> operation >> b;
 
    int result;
    switch (operation) {
        case '+':
            result = a + b;
            break;  // если не написать этот break, программа просто пойдёт дальше в код следующего блока case
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
        case ':':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:  // здесь обрабатывается случай, когда ни один case не сработал.
            result = 0;
    }
 
    std::cout << result << std::endl;
}