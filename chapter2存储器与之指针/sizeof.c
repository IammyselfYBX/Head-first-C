#include <stdio.h>
int main()
{
    int a = sizeof("Hello World\n");
    printf("%d\n", a);

    return 0;
}