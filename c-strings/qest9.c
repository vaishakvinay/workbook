// write a program to check the given character is present in a string or not
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char ch;
    int count = 0; 

    printf("Enter the string: ");
    scanf("%99[^\n]", str);
    

    printf("Enter the character: ");
    scanf("  %c",&ch); 

    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++; 
        }
    }

    
    if (count > 0) {
        printf("The character '%c' is present in the string.\n", ch);
        printf("Count of '%c': %d\n", ch, count);
    } else {
        printf("The character '%c' is not present in the string.\n", ch);
    }

    
}