#include <stdio.h>

int main()
{
    int val = 0;
    char card_name[3];
   
    while(card_name){
        puts("Please input");
        scanf("%2s", card_name);
        switch (card_name[0])
        {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                printf("val is %d\n",val);
                continue;
            case 'A':
                val =11;
                printf("val is %d\n",val);
                continue;
            default:
                puts("error");
        }
        
    }
    return 0;
}