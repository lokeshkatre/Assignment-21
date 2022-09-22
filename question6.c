#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};

void sortByName(struct employee *e)
{
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            if(strcmp(e[i].name,e[j].name)>0)
            {
                struct employee temp;
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}
int main()
{
    struct employee e[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter Employee name:");
        fflush(stdin);
        fgets(e[i].name,20,stdin);
        printf("Enter Employee Id:");
        scanf("%d",&e[i].id);
        printf("Enter Employee salary:");
        scanf("%d",&e[i].salary);
    }
    sortByName(e);
    printf("\n\n");
    for(int i=0;i<3;i++)
    {
        
        printf("Name:%s",e[i].name);
        printf("id:%d\n",e[i].id);
        printf("salary:%d\n\n",e[i].salary);
        
    }
}
