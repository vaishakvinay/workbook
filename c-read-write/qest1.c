//write a program to read integers from the file
#include<stdio.h>


int main()
{
    FILE *ptr;
    ptr = fopen("test.txt","r");
    int num;

    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fclose(ptr);  
    
}