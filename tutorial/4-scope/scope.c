#include <stdio.h>

int* gp;

void thorin(int* p)
{
    *p = 10;
}

int* balin(int* q)
{
    gp = q;

    thorin(q);

    return q;
}

void gun()
{
    int x = 42;

    balin(&x);
}

int main()
{
    gun();
    printf("Val is %d\n", *gp);
    printf("Print some rand values %d %d %d %d %d %d %d %d %d\n", 11, 12, 13, 14, 15, 16, 17, 18, 19);
    printf("Val is %d\n", *gp);

    return 0;
}

