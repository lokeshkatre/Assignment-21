#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct employee e[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter Employee name:");
        fflush(stdin);
        fgets(e[i].name,20,stdin);
        printf("Enter Employee Id:");
        scanf("%d",&e[i].id);
        printf("Enter Employee salary:");
        scanf("%d",&e[i].salary);
    }

    for(int i=0;i<10;i++)
    {
        for(int j=i;j<3;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                struct employee temp;
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    int maxSalary=e[9].salary;
    printf("\n\nEmployee with maximum salary details are:\n");
    for(int i=0;i<3;i++)
    {
        if(maxSalary==e[i].salary)
        {
        printf("Name:%s",e[i].name);
        printf("id:%d\n",e[i].id);
        printf("salary:%d\n",e[i].salary);
        }
    }
    return 0;
}