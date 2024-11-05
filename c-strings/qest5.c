//write your own version of strcpy function from <string.h>


#include <stdio.h>
#include <string.h>

void string_copy(char *s, char *second) {
    int length = strlen(s);
    
    if (length >= 100) { 
        printf("Error: second array is too small  to hold the string\n");
        return;
    }
    
    for (int i = 0; i < length; i++) {
        second[i] = s[i];
    }
    second[length] = '\0'; 
}
    
    

int main()
{
    char str[100];
    char copy[100];
    

    printf("Enter the string: ");
    scanf("%99[^\n]", str);
        
        string_copy(str,copy);

        
        printf("original: %s\n", str);
        printf("String copy: %s\n", copy);
}