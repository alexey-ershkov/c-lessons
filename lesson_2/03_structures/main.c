#include <stdio.h>

struct account
{
    char* login;
    char* password;
};


int main() {
    struct account person_account = {"John", "12345678"};

    printf("person_var login is %s\n", person_account.login);
    printf("person_var password is %s\n", person_account.password);

    return 0;
}