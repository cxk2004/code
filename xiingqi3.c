#include<stdio.h>
#define CURRENT_YEAR 2023
#define WEEKDAY_JAN1 7
#define IS_LEAPYEAR  0
int main(void)
{
    int month,day,tianshu,k;
    printf("Week Day Calculator of Year %d, please input month(1-12) and day(1-31):\n",CURRENT_YEAR);
    scanf("%d%d" , &month, &day);
    if(month==1)
    {
        if(day <= 31 && day>0)
        {
           tianshu = day;
        }
        else
        {
            printf("Error");
        }
    }
    else if(month==2)
    {
        if (day<= 28 && day >0)
        {
            tianshu =day+31;
        }
        else
        {
            printf("Error");
        }
    }
    else if(month==3)
    {
        if(day<=31 && day >0)
        {
           tianshu=day+59;
        }
        else
        {
            printf("Eroor");
        }
    }
    else if(month==4)
    {
        if(day<=30 && day >0)
        {
            tianshu=day+90;
        }
        else
        {
            printf("Error");
        }
    }
    else if(month==5)
    {
        if(day<=31 && day>0)
        {
            tianshu=day+120;
        }
        else
        {
            printf("Error");
        }
    }
    else if(month==6)
    {
        if(day<=30 && day>0)
        {
            tianshu=day+151;
        }
        else
        {
            printf("Eroor");
        }
    }
    else if(month==7)
    {
        if(day<=31 && day>0)
        {
            tianshu=day+181;
        }
        else
        {
            printf("Error");
        }
    }
    else if(month==8)
    {
        if(day<=31 && day>0)
        {
            tianshu=day+212;
        }
        else
        {
            printf("Error");
        }
    }
    else  if(month==9)
    {
        if(day<=30 && day>0)
        {
            tianshu=day+243;
        }
        else
        {
            printf("Error");
        }
    }
    else if(month==10)
    {
        if(day<=31 && day>0)
        {
           tianshu=day+273;
        }
        else
        {
            printf("Error");
        }
    }
    else if(month==11)
    {
        if(day<=30 && day>0)
        {
            tianshu=day+304;
        }
        else
        {
            printf("Error");
        }
    }
    else if(month==12)
    {
        if(day<=31 && day>0)
        {
            tianshu=day+334;
        }
        else
        {
            printf("Error");
        }
    }
    k=tianshu%7;
    if(k==1)
    {
        printf("星期日");
    }
    else if(k==2)
    {
        printf("星期一");
    }
    else if(k==3)
    {
        printf("星期二");
    }
    else if(k==4)
    {
        printf("星期三");
    }
    else if(k==5)
    {
        printf("星期四");
    }
    else if(k==6)
    {
        printf("星期五");
    }
    else if(k==0)
    {
        printf("星期六");
    }
}   