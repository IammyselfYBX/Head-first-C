#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "Form here to maternity",
    "The girl form Iwo Jima",
};

int find_track(char search_for[])
{
    int i;
    for(i = 0; i < 5; i++){
        if(strstr(tracks[i], search_for)){
            printf("Track %d: '%s'\n", i, tracks[i]);
        }
        return 1;
    }
    printf("Sorrry there isn't %s\n", search_for);
    return 0;
}

int main(int argc, char *agrv[])
{
    char search_for[80];
    printf("Search for:");
    fflush(stdin);
    fgets(search_for, 80, stdin);
    search_for[strlen(search_for) -1]='\0';
    puts(search_for);
    find_track(search_for); 

    return 0;
}