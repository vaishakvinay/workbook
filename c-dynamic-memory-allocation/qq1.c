//write a program to create a dynamic array of 5 floats

#include<stdio.h>
#include<malloc.h>

int main()
{
    float *ptr;

    ptr=(float  *) malloc(5 * sizeof(float));

    ptr[0]= 4.5;
    ptr[1]= 4.6;
    ptr[2]= 4.7;
    ptr[3]= 4.8;
    ptr[4]= 4.9;

    printf("%f",ptr[2]);
}