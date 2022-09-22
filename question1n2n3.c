#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct Employee e;
    printf("Enter employee name:");
    gets(e.name);
    printf("Enter employee id:");
    scanf("%d",&e.id);
    printf("Enter employee salary:");
    scanf("%d",&e.salary);
    
    printf("\nemployee1 id=%d\n",e.id);
    printf("employee1 name=%s\n",e.name);
    printf("employee1 salary=%d\n",e.salary);
}