#include <stdio.h>
#include <stdlib.h>

void add(void);
void add2(int a, int b);

int main(void)
{
    int x, y;
    x= 4;
    y=6;
    add();
    add2(x,y);
return 0;
}

void add(void)
{
    int a= 3;
    int b = 9;
    printf("add = %d\n", a+b);

}

void add2(int a, int b)
{

    printf("add = %d\n", a+b);
}