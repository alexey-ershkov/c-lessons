#include <stdio.h>

int main() {
    // for loop
    printf("For loop\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", i);
    }

    // while loop

    printf("\nWhile loop\n");

    int i = 0;
    while (i < 5) {
        printf("%d ", i);
        ++i;
    }

    // do while loop

    printf("\nDo while loop\n");
    i = 6;

    do {
        printf("%d ", i);
    } while (i < 5);

    return 0;
}