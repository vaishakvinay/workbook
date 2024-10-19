//create a program to display array of 5 complex numbers using function , numbers must be taken by user prompt
#include<stdio.h>

struct complex
{
    float r;
    float c;

};

void display(struct complex x) {
    printf("The complex number is: %.2fi + %.2fj\n", x.r, x.c);
}

int main()
{
    
    int size = 5;  
    struct complex numbers[size]; 

    for (int i = 0; i < size; i++) {
        printf("Enter the real and imaginary parts for complex number %d: ", i + 1);
        scanf("%f %f", &numbers[i].r, &numbers[i].c);
    }


    for (int i = 0; i < size; i++) {
        display(numbers[i]);
    }
}