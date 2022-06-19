#include<stdio.h>
int main()
{
float r,a,v;
printf("Enter radius value\n");
scanf("%f",&r);
a=4*3.14*r*r;
v=4/3*3.14*r*r*r;
printf("surface area of circle=%f\nVolume=%f",a,v);
}
