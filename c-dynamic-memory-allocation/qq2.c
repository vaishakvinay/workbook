//write a program to create an array of size n using calloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    ptr=(int  *) calloc(n, sizeof(int));

    ptr[0]= 45;
    ptr[1]= 46;
    ptr[2]= 47;
    ptr[3]= 48;
    ptr[4]= 49;

    
}