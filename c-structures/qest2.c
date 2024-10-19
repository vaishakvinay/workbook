//write a function sum vector which returns the sum of 2 vectors passed to it. the vectors must be 2 dimensional
#include<stdio.h>

struct twodvector
{
    int x;
    int y;

};

struct twodvector sum(struct twodvector first, struct twodvector second)
{
    int a,b;
    a = first.x + second.x;
    b = first.y + second.y;
    
    struct twodvector result = {a,b};
    return result;

}

int main()
{
    struct twodvector v1 = {1, 4};
    
    struct twodvector v2= {11, 54};

    struct twodvector v3= sum(v1,v2);

    printf("%di + %dj\n", v3.x,v3.y);

   
    
}