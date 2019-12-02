#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    printf("PATH: %s\n", getenv("PATH"));
    char *my_env[] = {"JUICE=peach and apple", NULL};
    execle("dinner_info", "dinner_info", "4", NULL, my_env);
    printf("Diners: %s\n", argv[1]);
    printf("Junice: %s\n", getenv("JUICE"));

    return 0;
}