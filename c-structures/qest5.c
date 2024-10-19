//write a program with a structure representing a complex number

#include<stdio.h>

struct complex
{
    float r;
    float c;

};

int main()
{
    struct complex v1 = {1.34, 4.44};
    
    struct complex v2= {11.88, 54.9};

    printf("%fi + %fj\n", v1.r,v1.c);
    printf("%fi + %fj\n", v2.r,v2.c);
    
    
}