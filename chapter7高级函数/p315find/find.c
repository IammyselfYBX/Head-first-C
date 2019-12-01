#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;
char *ADS[] = {
    "William: SBM GSON likes sports, TV, dining",
    "Matt: SWM NS likes art, movies, thearter",
    "Luis: SLM ND likes books, threater, art",
    "Mike; DWN DS likes trucks, sports and bieber",
    "Peter: SAM likes chess, working out and art",
    "John: SJM likes sports, movies and theater",
    "Jed: DBM likes theater, books and dining"
};

void find()
{
    int i;
    puts("-------------------------------------------------");
    puts("|                Search results                 |");

    for(i = 0; i < NUM_ADS; i++){
        if(strstr(ADS[i], "sports")
            && !strstr(ADS[i], "bieber")){
                printf("%s\n", ADS[i]);
            }
    }
    puts("-------------------------------------------------");
}

int main()
{
    find();
    return 0;
}