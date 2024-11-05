//write a program to encrypt a string by adding  1 to the ascci value of its character

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%99[^\n]", str);
     
    for(int i= 0;i <strlen(str);i++)
    {
        str[i]++;
    }
    printf("Encrypted string: %s\n", str);
}