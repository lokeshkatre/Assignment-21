#include<stdio.h>
struct student 
{
    int rollNum;
    char name[20];
    char addrs[40];
};
int main()
{
    int n;
    printf("Enter Number of Students:");
    scanf("%d",&n);

    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d:\n",i+1);
        printf("Enter Student's Name:");
        fflush(stdin);
        fgets(s[i].name,20,stdin);
        printf("Enter roll number:");
        scanf("%d",&s[i].rollNum);
        printf("Enter Address:");
        fflush(stdin);
        fgets(s[i].addrs,40,stdin);
    }
    printf("\n\n\n");
    for(int i=0;i<n;i++)
    {
        printf("Student %d:\n",i+1);
        printf("Name:%s",s[i].name);
        printf("Roll number:%d\n",s[i].rollNum);
        printf("Address:%s\n\n",s[i].addrs);
    }
}
