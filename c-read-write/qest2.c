//write a program for writing mutiplication table


#include<stdio.h>


int main()
{   

    FILE *ptr;
    ptr = fopen("test.txt","w");
    int a[10];
    for(int i=0;i<10;i++)
    
    {   
         
        a[i] = 5 * (i + 1);  // Store the multiplication result in the array
    }

 for(int i = 0; i < 10; i++)
    {
        fprintf(ptr,"Multiplication of 5 * %d is: %d\n", i + 1, a[i]);

    }
    fclose(ptr); 
}