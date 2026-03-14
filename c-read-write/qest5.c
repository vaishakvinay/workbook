// write a program to read integer from a file and double it and write it back
#include<stdio.h>


int main()
{
    FILE *ptr;
    int num;

    ptr = fopen("test.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);


    ptr = fopen("test.txt", "w"); 
    fprintf(ptr,"%d\n", num*2);


    fclose(ptr);
   
    
}