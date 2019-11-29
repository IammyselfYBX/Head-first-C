#include <stdio.h>

int main(int argc, char* argv[])
{
    char s[] = {'1', '3', 'e', '4', 't'};
    int i = 0;
    puts(s);
    char a[] = {'s', 'a', 'd', 'e', 'r', '\0'};
    while(a[i] != '\0')
    {
        printf("%c ",a[i]);
        i++;
    }
    printf("\n");
    puts(a);
    

    return 0;
}