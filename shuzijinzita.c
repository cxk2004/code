#include<stdio.h>
int main(void)
{
    int i,j,COUNT;
    char a;
    printf("请输入大写字母:");
    scanf("%c",&a);
    COUNT=a-'A'+1;
    for(j=1;i<=COUNT-i;j++)
    {
        for(j=1;j<=COUNT-i;j++)
         printf("   ");
        for(j=1,a='A';j<=i;j++,a++)
         printf("%c,a");
        for(j=1,a='A'+i-2;j<i;j++,a--)
         printf("%c,a");
        printf("\n");
    }
}