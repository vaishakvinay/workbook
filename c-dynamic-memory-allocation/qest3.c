//write a program to dynamically create an array of size 6 capapble of storing 6 integers entered by user using calloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ptr=(int  *) calloc(6,sizeof(int));
        
    ptr[0]= 45;
    ptr[1]= 46;
    ptr[2]= 47;
    ptr[3]= 48;
    ptr[4]= 49;
    ptr[5]= 50;

    printf("the value at index %d is %d\n",0,ptr[0]);
    printf("the value at index %d is %d\n",1,ptr[1]);
    printf("the value at index %d is %d\n",2,ptr[2]);
    printf("the value at index %d is %d\n",3,ptr[3]);
    printf("the value at index %d is %d\n",4,ptr[4]);
    printf("the value at index %d is %d\n",5,ptr[5]);

}   