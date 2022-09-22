#include<stdio.h>
struct Marks
{
    char name[20];
    int rollNum;
    float chem_marks,math_marks,phy_marks;
};
int main()
{
    struct Marks s[5];
    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d:\n",i+1);
        printf("Enter Student's Name:");
        fflush(stdin);
        fgets(s[i].name,20,stdin);
        printf("Enter roll number:");
        scanf("%d",&s[i].rollNum);
        printf("Enter Chemistry marks:");
        scanf("%d",&s[i].chem_marks);
        printf("Enter Mathematic marks:");
        scanf("%d",&s[i].math_marks);
        printf("Enter physics marks:");
        scanf("%d",&s[i].phy_marks);      
    }
    printf("\n\nPercentage of each students are:");
    for(int i=0;i<5;i++)
    {
        float perctg=(float)(s[i].chem_marks+s[i].phy_marks+s[i].math_marks)*100/300;
        printf("\n\nStudent %d:",i+1);
        printf("Name:%s",s[i].name);
        printf("Roll number:%d\n",s[i].rollNum);
        printf("Percentage:%.2f%%\n",perctg);   
    }
    return 0;
}
