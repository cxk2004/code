#include<stdio.h>
int main(void)
{
    int input, counter,max;
    counter=0;
    printf("Please input positive integer,otherwise to stop;\n");
    scanf("%d", &input);
    max = input;
    while(input > 0)
    {
        counter ++;
        if(input > max)
        {
            max = input;
        }
        printf("Please input positive integer, otherwise to stop:\n");
        scanf("%d",&input);
    }
    if(counter==0)
    {
        printf("No valid input.\n");
    }
    else
    {
        printf("The max of %d input integers is %d", counter,max);
    }
    return 0; 
}