//write a program to show how to pass a structure to a function and pass a structure using pointers also

#include<stdio.h>

struct employee{
    int salary;
    float hike;
    char name[10];
};

void show(struct employee e){
    printf("the name of the employee is :%s\n", e.name);
    printf("the hike of the employee is :%.2lf\n", e.hike);
    printf("the name of the employee is :%d\n", e.salary);
    printf("\n");


}
void showR(struct employee *e){
    printf("the name of the employee is :%s\n", (*e).name);
    printf("the hike of the employee is :%.2lf\n", (*e).hike);
    printf("the name of the employee is :%d\n", (*e).salary);
    printf("\n");


}

int main()
{
    struct employee decon ={34,5.2,"decon"} ;
    show(decon);
    showR(&decon);
} 
