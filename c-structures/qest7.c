//write a program with a structure representing a complex number USING TYPE DEF

#include<stdio.h>

typedef struct complex
{
    float r;
    float c;

}comp;

int main()
{
    comp v1 = {1.34, 4.44};
    
    comp v2= {11.88, 54.9};

    printf("%fi + %fj\n", v1.r,v1.c);
    printf("%fi + %fj\n", v2.r,v2.c);
    
    
}