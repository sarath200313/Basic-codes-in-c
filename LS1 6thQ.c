#include<stdio.h>
int main()
{
int p,n;
float r,Si;
printf("Enter amount to deposit,p\n");
scanf("%d",&p);
printf("Enter time which you deposite,n\n");
scanf("%d",&n);
printf("Enter rate at which you deposite,r\n");
scanf("%f",&r);
Si=(p*n*r)/100.0;
printf("Simple intrest=%f",Si);
}
