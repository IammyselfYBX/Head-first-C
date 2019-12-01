#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main()
{
    char s[] = "Speak friend and enter";
    encrypt(s);
    printf("Encryted to '%s'\n", s);

    printf("Checksum is %d\n", checksum(s));
    encrypt(s);
    printf("Decryptyed back to '%s'\n", s);
    printf("Checksum is %d\n", checksum(s));

    return 0;
}