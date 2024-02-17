#include <stdio.h>

struct person
{
    char* name;
    int age;
};


int main() {
    struct person person_var = {"John", 25};

    printf("person_var name is %s\n", person_var.name);
    printf("person_var age is %d\n", person_var.age);

    return 0;
}