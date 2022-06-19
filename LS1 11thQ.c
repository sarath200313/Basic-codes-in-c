#include<stdio.h>
#include<math.h>
int main()
{
float F,a,b,c,d;
a=2.9678*pow(10, -27);
b=0.876*pow(10, -38);
c=7.025*pow(10, 16);
d=9.75*pow(10, 12);
F=(a+b)/(c-d);
printf("F=%e",F);
}
