#include <stdio.h>

int main() {
    int number = 5;
    float point_number = 4.35;
    double point_number_extended = 4.45;
    char character = 'c';

    long int long_number = 2147483647;


    printf("number %d\n", number);
    printf("point number %f\n", point_number);
    printf("point number extended %lf\n", point_number_extended);
    printf("character %c\n", character);
    printf("long number %ld\n", long_number);


    int a = 5;
    int b = 7;
    int sum = a + b;

    // + оператор сложения
    // - оператор вычитания
    // * оператор умножения
    // % оператор взятия остатка от деления
    // / оператор деления

    printf("Sum %d\n", sum);

    printf("Pointer a=%p\nPointer b=%p\n", &a, &b);


    return 0;
}