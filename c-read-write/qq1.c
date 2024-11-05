//create a program to check if file exists or not 
#include<stdio.h>


int main()
{
    FILE *ptr;
    ptr = fopen("test.txt","r");
        if (ptr == NULL) {
        printf("File does not exist.\n");
    } else {
        printf("File exists.\n");
        fclose(ptr); 
    }
}