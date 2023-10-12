#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1,x2,x3;
    int minX=0,maxX=0;
    printf("please input three integers:\n");
    scanf("%d%d%d", &x1,&x2,&x3);

    (x1 > x2) ? (maxX = x1,minX=x2)
              :(maxX = x2, minX=x1 );
    maxX =(maxX> x3)  ?  maxX
                       :x3;
    minX = (minX > x3 ) ? x3
                       : minX;
    printf("min is%d,max is %d\n" , minX,maxX);        
    return 0;         
}