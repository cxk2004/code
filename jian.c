#include<stdio.h>

int main(void)
{
    int integer1;
    int integer2;

    printf("Enter first integer\n");
    scanf("%d", &integer1);

    printf("Enter second integer\n");
    scanf("%d" , &integer2);
    int answer;
    answer= integer1 - integer2;
    
    printf("Answer is %d\n", answer);
} 