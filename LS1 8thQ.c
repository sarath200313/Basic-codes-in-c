#include<stdio.h>
int main()
{
int x,y,a,b,c,e;
float d;
printf("Enter x,y values\n");
scanf("%d%d",&x,&y);
a=x+y;
b=x-y;
c=x*y;
d=(float)x/y;
e=x%y;
printf("Addition=%d\nSubtraction=%d\nMultiplication=%d\ndivision=%f\nremainder=%d",a,b,c,d,e);
}
