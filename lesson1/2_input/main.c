#include <stdio.h>

int main() {
    int a, b;


    printf("Enter a and b \n");
    scanf("%d %d", &a, &b);
    printf("Sum is %d\n", a+b);

    float c;

    printf("Enter float\n");
    scanf("%f", &c);
    printf("Scanned float: %f\n", c);

    return 0;
}