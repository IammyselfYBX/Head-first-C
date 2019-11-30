#include "decode.h"

void decode(char *message)
{
    char c;
    while(*message){
        *message = *message^31;
        message++;
    }
}