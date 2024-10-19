// write aprogram to illustrtate an arrow operator on c
#include<stdio.h>

struct employee{
    int salary;
    float hike;
    char name[10];
};


void showR(struct employee *e){
    printf("the name of the employee is :%s\n", e->name);
    printf("the hike of the employee is :%.2lf\n", e->hike);
    printf("the name of the employee is :%d\n", e->salary);
    printf("\n");


}

int main()
{
    struct employee decon ={34,5.2,"decon"} ;
   
    showR(&decon);
} 