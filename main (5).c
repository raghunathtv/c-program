#include<stdio.h>
int main()
{
int n,r,rem;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
r=r*10+rem;
n=n/10;
}
atof(r);
printf("reverse is %d",r);
return 0;
}