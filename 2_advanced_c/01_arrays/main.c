#include <stdio.h>




// same as void print_array(int array[], int array_len) {
void print_array(int *array, int array_len) {
    // int array_len = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < array_len; ++i) {
        printf("Element %d in array_of_integers: %d\n", i, array[i]);
    }
}

int main() { 
    // int *array_of_integers = {1,2,3,4} - здесь нельзя получить длинну, так как работаем с указателем;
    int array_of_integers[3] = {1,2,3};
    printf("size of all array: %lu\nsize of single var %lu\n", sizeof(array_of_integers), sizeof(array_of_integers[0]));


    int array_len = sizeof(array_of_integers)/sizeof(array_of_integers[0]);

    print_array(array_of_integers, array_len);

    printf("Fifth element: %d\n", array_of_integers[4]);
    printf("Sixth element: %d\n", array_of_integers[5]);


    int multiple_rows_array[2][2] = {{1,2}, {3,4}};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Elemet of multiple_rows_array[%d][%d] is %d\n", i, j, multiple_rows_array[i][j]);
        }
    }

    // // scanning

    int array_to_read[3];

    for (int k = 0; k < 3; ++k) {
        printf("Введите элемента массива %d:\n", k);
        scanf("%d", &array_to_read[k]);
    }

    for (int k = 0; k < 3; ++k) {
        printf("%d\n", array_to_read[k]);
    }

    return 0;
}