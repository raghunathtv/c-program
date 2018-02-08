#include<stdio.h>
#include<conio.h>
int main()
{
int r,count[100],num;
printf("enter the number");
scanf("%d",&num);
while(num>0)
{r=num%10;
num=num/10;
count++;
}
printf("%d",count);
retunr 0;
}
