// write a program to count the occurence of a given character in a string
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char ch;
    int count;

    printf("Enter the string: ");
    scanf("%99[^\n]", str);
    
    printf("Enter the character: ");
    scanf("  %c",&ch); 

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++; 
        }
    }
    printf("counts of %c is: %d\n", ch,count);
}