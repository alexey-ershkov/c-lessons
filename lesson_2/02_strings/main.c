#include <stdio.h>
#include <strings.h>

#define STRINGS_ARRAY_LENGTH 2



int main() { 
    char some_string[] = "some string";

    // char** array_of_strings[] = { - будет та же ошибка, что и с int*
    char* array_of_strings[STRINGS_ARRAY_LENGTH] = {
        "first_string",
        "second_string",
    };

    printf("some_string is %s with sizeof %lu and len %lu\n", some_string, sizeof(some_string), strlen(some_string));
    
    int i = 0;
    while (some_string[i] != '\0') {
        printf("some_string char for i=%d is: %c\n", i, some_string[i]);
        ++i;
    }

    for (int j = 0; j < STRINGS_ARRAY_LENGTH; ++j) {
        printf("%d element of array of strings is %s\n", j, array_of_strings[j]);
    }

    // scanning

    char string_to_read[12];

    printf("Введите строку\n");
    scanf("%s", string_to_read);
    printf("\nstring_to_read is: %s\n", string_to_read);

    char* strings_to_read[STRINGS_ARRAY_LENGTH];


    for (int k = 0; k < STRINGS_ARRAY_LENGTH; ++k) {
        printf("Введите элемента массива %d:\n", k);
        scanf("%s", strings_to_read[k]);
    }

    for (int k = 0; k < STRINGS_ARRAY_LENGTH; ++k) {
        printf("%s\n", strings_to_read[k]);
    }

    return 0;
}