#include<stdio.h>

int main(void)
{
int month,day,A;
        printf("please enter month and day\n");
        scanf("%d%d",&month,&day);
        if(month<1||month>12||day<0||day>31){puts("wrong number");}
        if(month==1){A=day%7;}
        if(month==2&&day<=28){A=(day+31)%7;}
        if(month==3){A=(day+59)%7;}
        if(month==4&&day<=30){A=(day+90)%7;}
        if(month==5){A=(day+120)%7;}
        if(month==6&&day<=30){A=(day+151)%7;}
        if(month==7){A=(day+181)%7;}
        if(month==8){A=(day+212)%7;}
        if(month==9&&day<=30){A=(day+243)%7;}
        if(month==10){A=(day+273)%7;}
        if(month==11&&day<=30){A=(day+304)%7;}
        if(month==12){A=(day+334)%7;}
        if(A==1){puts("this day is SUNDAY");}
        if(A==2){puts("this day is MONDAY");}
        if(A==3){puts("this day is TUESDAY");}
        if(A==4){puts("this day is WEDNESDAY");}
        if(A==5){puts("this day is THURSDAY");}
        if(A==6){puts("this day is FRIDAY");}
        if(A==0){puts("this day is SATURDAY");}
}