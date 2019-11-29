#include <stdio.h>

int main()
{
    int val = 0;
    char card_name[3];
    puts("Please input");
    scanf("%2s", card_name);
    switch (card_name[0])
    {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val =11;
    default:
        puts("error");
    }
    printf("val is %d\n",val);

    return 0;
}