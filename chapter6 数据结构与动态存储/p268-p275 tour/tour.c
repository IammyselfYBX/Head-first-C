#include <stdio.h>

typedef struct island{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

void display(island *start)
{
    island *i = start;

    for(; i != NULL; i = i->next){
        printf("Name: %s \n open: %s - %s\n", i->name, i->opens, i->closes);
    }
}

int main()
{
    //给每个节点初始化
    island amity = {"Amity", "09:10", "17:00", NULL};
    island craggy = {"Craggy", "09:20", "17:01", NULL};
    island isla_nublar = {"ISla Nublar", "09:30", "17:30", NULL};
    island shutter = {"Shutter", "09:40", "17:04", NULL};

    //连接每个节点
    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;

    //插入节点
    island skull = {"Skull", "09:50", "17:50", NULL};
    isla_nublar.next = &skull;
    skull.next = &shutter;

    //遍历
    display(&amity);

    return 0;
}