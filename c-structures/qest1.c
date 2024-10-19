//create 2d vectors using structures in c
#include<stdio.h>

struct twodvector
{
    int x;
    int y;

};

int main()
{
    struct twodvector v1 = {1, 4};
    
    struct twodvector v2= {11, 54};

    printf("%di + %dj\n", v1.x,v1.y);
    printf("%di + %dj\n", v2.x,v2.y);
    
    
}