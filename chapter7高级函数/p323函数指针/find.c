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

int sports_no_bieber(char *s)
{
    return strstr(s, "sports") && !strstr(s, "bieber");
}

int sport_or_workout(char *s)
{
    return strstr(s, "sports") || strstr(s, "working out");
}

int ns_theater(char *s)                 //类型是 int (* ns_theater)(char *)
{
    return strstr(s, "NS") && strstr(s, "theater");
}

int arts_theater_or_dining(char *s)     //类型是 int (* arts_theater_or_dining)(char *)
{
    return strstr(s, "arts") || strstr(s, "theater") || strstr(s, "dining");
}

void find(int (* match)(char *))    //函数指针类型需要匹配
{
    int i;
    puts("-------------------------------------------------");
    puts("|                Search results                 |");

    for(i = 0; i < NUM_ADS; i++){
        if(match(ADS[i])){
            printf("%s\n", ADS[i]);
        }
    }
    puts("-------------------------------------------------\n");
}

int main()
{
    find(sport_or_workout);
    find(sports_no_bieber);
    find(ns_theater);
    find(arts_theater_or_dining);

    return 0;
}