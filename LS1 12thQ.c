#include<stdio.h>
#include<math.h>
int main()
{
int x1,x2,x3,y1,y2,y3,a,b,c,d,e,f;
float L1,L2,L3,s,A,C;
printf("Enter values of 1st coordinate:");
scanf("%d%d",&x1,&y1);
printf("Enter values of 2nd coordinate:");
scanf("%d%d",&x2,&y2);
printf("Enter values of 3rd coordinate:");
scanf("%d%d",&x3,&y3);
a=(x1-x2);
b=(y1-y2);
L1=sqrt(a*a+b*b);
printf("\nLenght of 1st side=%f",L1);
c=(x2-x3);
d=(y2-y3);
L2=sqrt(c*c+d*d);
printf("\nLenght of 2nd side=%f",L2);
e=(x3-x1);
f=(y3-y1);
L3=sqrt(e*e+f*f);
printf("\nLenght of 3rd side=%f",L3);
s=(L1+L2+L3)/2;
A=sqrt(s*((s-L1)*(s-L2)*(s-L3)));
printf("\nArea of Triangle=%f sq.units",A);
C=L1+L2+L3;
printf("\nCircumference of triangle=%f",C);
}
