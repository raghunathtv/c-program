#include<stdio.h>
int main()
{
int year;
printf("leap year or not");
scanf("%d",&year);
if(year%4==0)
{
printf(" year %d is LEAP YEAR",year);
}
else
{
printf(" year %d is NON LEAP YEAR",year);
}
}
