//write a program to take a string as an input from user using %c and %s. confirm the trings are equal

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[5], str2[5];
    printf("enter 1st word to compare\n");

    for(int i=0;i<4;i++){
    scanf(" %c",&str1[i]);
    
    }
    str1[4]='\0';
    printf("enter 2nd word to compare\n");
    scanf("%s",str2);
    printf("comparison returns :%d",strcmp(str1, str2));

}


