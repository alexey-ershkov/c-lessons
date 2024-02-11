#include <stdio.h>

int main() {
    int a, b;


    printf("Enter a and b \n");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("b is greater or equal a\n");
    }

    return 0;
}