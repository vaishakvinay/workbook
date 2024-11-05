// take name and salary of 2 employees from user and write them in text file

#include<stdio.h>


int main()
{
    FILE *ptr;
   

    char name1[10];
    char name2[10];
    int salary1, salary2;

    printf("enter 1st name and salary\n");
    scanf("%s  %d", name1,&salary1);

    printf("enter 2nd name and salary\n");
    scanf("%s  %d", name2,&salary2);

    ptr = fopen("test.txt","w");
    fprintf(ptr, "%s,%d \n", name1,salary1);
    fprintf(ptr, "%s,%d\n", name2,salary2);
    fclose(ptr); 

}