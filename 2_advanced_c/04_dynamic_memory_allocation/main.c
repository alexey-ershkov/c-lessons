#include <stdio.h>
#include <stdlib.h>


int main() {
    int user_defined_length;

    printf("Enter array length:\n");
    scanf("%d", &user_defined_length);

    // calloc - то же самое, только с инициализацей нулями
    int* dynamic_int_array = malloc(user_defined_length * sizeof(int));

    for (int i = 0; i < user_defined_length; ++i) {
        scanf("%d", &dynamic_int_array[i]);
    }

    for (int i = 0; i < user_defined_length; ++i) {
        printf("Element %d of array is %d\n", i, dynamic_int_array[i]);
    }

    free(dynamic_int_array);

    return 0;
}