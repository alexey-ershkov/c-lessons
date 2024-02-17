#include <stdio.h>

int main() {
    char char_var;
    printf("Size of char is: %lu bytes\n", sizeof(char_var));


    printf("\nDifferent int types:\n");
    int integer_var;
    printf("Size of integer is: %lu bytes\n", sizeof(integer_var));

    unsigned int u_integer_var;
    printf("Size of unsigned integer is: %lu bytes\n", sizeof(u_integer_var));

    short int short_integer_var;
    printf("Size of short integer is: %lu bytes\n", sizeof(short_integer_var));


    printf("\nFloats:\n");
    long int long_integer_var;
    printf("Size of long integer is: %lu bytes\n", sizeof(long_integer_var));

    float float_var;
    printf("Size of float is: %lu bytes\n", sizeof(float_var));

    double double_var;
    printf("Size of double is: %lu bytes\n", sizeof(double_var));

    int *int_ptr;
    char *char_ptr;
    float *float_ptr;
    double *dobule_ptr;

    printf("\nPointers:\n");
    printf("Size of int pointer is: %lu bytes\n", sizeof(int_ptr));
    printf("Size of char pointer is: %lu bytes\n", sizeof(char_ptr));
    printf("Size of float pointer is: %lu bytes\n", sizeof(float_ptr));
    printf("Size of double pointer is: %lu bytes\n", sizeof(dobule_ptr));



    return 0;
}