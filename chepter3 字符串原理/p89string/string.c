#include <stdio.h>
#include <string.h>

int main(int argc, char *agrv[])
{
    char a[15] = "dysfunctional";
    puts(a);

    //strstr
    char b[] = "fun";
    if(strstr(a, b)){
        printf("I find it,fun in the a[15]!!!\n");
    }

    //strchr
    char c;
    if(strrchr(a, c)){
        printf("I find it,c in the a[15]!!!\n");
    }

    //strcmp
    char d[] = "dysfunctional";
    char e[] = "aysfunctional";
    if(!strcmp(a, d)){      //need !
        printf("a[] and d[] are the same!!!\n");
    }else{
        printf("a[] and d[] are different!!!\n");
    }
    if(!strcmp(a, e)){
        printf("a[] and e[] are the same!!!\n");
    }else{
        printf("a[] and e[] are different!!!\n");
    }
    
    //strcpy
    char f[15];
    strcpy(f, a);
    puts(f);
    char src[50], dest[50];
    strcpy(src,  "This is source");
    strcpy(dest, "This is destination");
    puts(src);
    puts(dest);

    //strlen
    printf("The length of a[] is %d\n", strlen(a));

    //strcat
    char g[50] = "YBX is the most handsome man in NCEPU ";
    strcat(g, a);
    puts(g);

    return 0;
}