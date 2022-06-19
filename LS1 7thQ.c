#include<stdio.h>
int main()
{
float a,b,c,d,sum,A,B,C,D;
printf("Enter given four values");
scanf("%f%f%f%f",&a,&b,&c,&d);
sum=a+b+c+d;
A = a/sum*100;
B = b/sum*100;
C = c/sum*100;
D = d/sum*100;
printf("A=%f\nB=%f\nC=%f\nD=%f",A,B,C,D);
}
