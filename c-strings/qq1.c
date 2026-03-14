//write a program to store the details of 3 employees from user defined data.

#include<stdio.h>
#include<string.h>

struct employee{
    int salary;
    float hike;
    char name[10];
};

int main()
{
    struct employee decon,rogue,wukong;
    strcpy(decon.name,"decon");
    decon.hike =5.3;
    decon.salary= 10000;
    
    printf("the name of the employee is :%s\n", decon.name);
    printf("the hike of the employee is :%.2lf\n", decon.hike);
    printf("the name of the employee is :%d\n", decon.salary);
    printf("\n");

    
    strcpy(rogue.name,"rogue");
    rogue.hike =2.3;
    rogue.salary= 15000;
    
    printf("the name of the employee is :%s\n", rogue.name);
    printf("the hike of the employee is :%.2lf\n", rogue.hike);
    printf("the name of the employee is :%d\n", rogue.salary);
    printf("\n");
    
    strcpy(wukong.name,"wukong");
    wukong.hike =6.7;
    wukong.salary= 18000;
    
    printf("the name of the employee is :%s\n", wukong.name);
    printf("the hike of the employee is :%.2lf\n", wukong.hike);
    printf("the name of the employee is :%d\n", wukong.salary);
    printf("\n");
}