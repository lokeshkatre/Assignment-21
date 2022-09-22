#include<stdio.h>
struct time
{
    int hrs;
    int min;
    int sec;
};
struct time TimeInt(struct time t1,struct time t2)
{
    struct time t3;
    if(t1.hrs>t2.hrs)
    {
        if(t1.min>t2.min)
        {
            if(t1.sec>t2.sec)t3.sec=t1.sec-t2.sec;
            else{t3.sec=t1.sec+60-t2.sec;t1.min--;}
            t3.min=t1.min-t2.min;
        }
        else
        {
            if(t1.sec>t2.sec)t3.sec=t1.sec-t2.sec;
            else{t3.sec=t1.sec-t2.sec;if(t1.min!=t2.min)t1.min--;}
            t3.min=t1.min+60-t2.min;
            if(t3.min>=60){t3.min=0;t3.hrs=t1.hrs-t2.hrs;}
            else t1.hrs--;
        }
        t3.hrs=t1.hrs-t2.hrs;
    }
    else if(t2.hrs>t1.hrs)
    {
        if(t2.min>t1.min)
        {
            if(t2.sec>t1.sec) t3.sec=t2.sec-t1.sec;
            else{t3.sec=t2.sec+60-t1.sec; t2.min--;}
            t3.min=t2.min-t1.min;
            if(t3.sec==60){t3.sec=0;t3.min++;}
        }
        else
        {
            if(t2.sec>t1.sec) t3.sec=t2.sec-t1.sec;
            else{t3.sec=t2.sec-t1.sec;if(t2.sec!=t2.sec)t2.min--;}
            t3.min=t2.min+60-t1.min;
            if(t3.min==60){t3.min=0;}
        }
        t3.hrs=t2.hrs-t1.hrs;
    }
    else
    {
        if(t1.min>t2.min)
        {
            if(t1.sec>t2.sec)t3.sec=t1.sec-t2.sec;
            else{t3.sec=t1.sec+60-t2.sec;   t1.min--;}
            if(t3.sec>=60){t3.min=t1.min-t2.min+1; t3.sec=0;}
            else t3.min=t1.min-t2.min;
        }
        else if(t2.min>t1.min)
        {
            if(t2.sec>t1.sec){t3.sec=t2.sec-t1.sec;}
            else{t3.sec=t2.sec+60-t1.sec; if(t3.sec==60)t3.sec=0;}
            t3.min=t2.min-t1.min;
        }
        else
        {
            if(t1.sec>t2.sec)t3.sec=t1.sec-t2.sec;
            else t3.sec=t2.sec-t1.sec;
            t3.min=t1.min-t2.min;
        }
        t3.hrs=t1.hrs-t2.hrs;
    }
    return t3;
}
int main()
{
    struct time t1,t2,t3;
    printf("Enter time period 1:\n");
    printf("hrs:");
    scanf("%d",&t1.hrs);
    printf("min:");
    scanf("%d",&t1.min);
    printf("sec:");
    scanf("%d",&t1.sec);
    
    printf("\nEnter time period 2:\n");
    printf("hrs:");
    scanf("%d",&t2.hrs);
    printf("min:");
    scanf("%d",&t2.min);
    printf("sec:");
    scanf("%d",&t2.sec);
    
    t3=TimeInt(t1,t2);
    printf("\n\nTime interval is %.2d:%.2d:%.2d",t3.hrs,t3.min,t3.sec);
    return 0;
}