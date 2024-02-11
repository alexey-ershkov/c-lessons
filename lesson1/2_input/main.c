#include <stdio.h>

int main() {
    int a, b;

    int* p = &a;

    printf("Enter a and b \n");
    scanf("%d %d", &a, &b);
    printf("p is %p", p);
    printf("Sum is %d\n", a+b+*p);

    float c;

    printf("Enter float\n");
    scanf("%f", &c);
    scanf("%f", &c);
    printf("Scanned float: %f\n", c);

    return 0;
}