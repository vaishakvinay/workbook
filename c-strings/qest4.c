// write a function to slice()to slice a string

#include <stdio.h>
#include <string.h>

void string_split(char *s, int index, char *first, char *second)
{
    int length = strlen(s);
    
    if (index <= length)
    {
        // Copy characters from 0 to (index-1) into 'first'
        for (int i = 0; i < index; i++)
            first[i] = s[i];
        first[index] = '\0';
        
        // Copy characters from index to the end into 'second'
        for (int i = index; i <= length; i++)
            second[i - index] = s[i];
    }
}

int main()
{
    char str[100];
    char first[100], second[100];
    int index;  

    printf("Enter the string: ");
    scanf("%99[^\n]", str);

    printf("Enter the position where you want to split the string: ");
    scanf("%d", &index);

    
    int length = strlen(str);
    if (index >= 0 && index <= length)
    {
        
        string_split(str, index, first, second);

        
        printf("First part: %s\n", first);
        printf("Second part: %s\n", second);
    }
    else
    {
        printf("Invalid index. Please enter a value between 0 and %d.\n", length);
    }

    return 0;
}



