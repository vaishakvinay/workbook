//create an array dynamically capable of storing 5 integers using calloc. now use realloc so that it can now store 10 integers
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ptr=(int  *) calloc(5, sizeof(int));
        
    ptr[0]= 45;
    ptr[1]= 46;
    ptr[2]= 47;
    ptr[3]= 48;
    ptr[4]= 49;

    ptr=(int  *) realloc(ptr, 10 * sizeof(int));
    ptr[5]= 5033;

    printf("the value at index %d is %d\n",0,ptr[0]);
    printf("the value at index %d is %d\n",1,ptr[1]);
    printf("the value at index %d is %d\n",2,ptr[2]);
    printf("the value at index %d is %d\n",3,ptr[3]);
    printf("the value at index %d is %d\n",4,ptr[4]);
    printf("the value at index %d is %d\n",5,ptr[5]);

}