#include <stdio.h>

int main() {
    int a, b;


    printf("Enter a and b \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        // some code here
        printf("a is greater than b\n");
    } else if (a == b) {
        printf("a and b are equal\n");
    } else {
        printf("b is greater or equal a\n");
    }

    return 0;
}