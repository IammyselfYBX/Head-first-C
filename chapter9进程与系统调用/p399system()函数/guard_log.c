#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * now()
{
    time_t t;
    time (&t);
    return asctime(localtime(&t));
}

int main()
{
    char commment[80];
    char cmd[120];

    fgets(commment, 80, stdin);
    sprintf(cmd, 
            "echo '%s %s' >> report.log",
            commment, now());

    system(cmd);

    return 0;
}