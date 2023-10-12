#include<stdio.h>
int main(void)
{
    int i = 1;
    while(i<=20)
    {
        printf("%2d    ",i);
        if(i%5 == 0)
        {
            printf("\n");

        }
        i=i+1;
    }
    return 0;
}
