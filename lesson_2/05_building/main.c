#include <stdio.h>
#include "module.h"

int main() {
    printf("Main module\n");

    modulePrint();

    int result = sum(5, 4);
    printf("Module sum result is %d\n", result);
    return 0;
}