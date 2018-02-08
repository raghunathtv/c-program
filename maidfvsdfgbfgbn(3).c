#include<stdio.h>
int main()
{
char  s[1000];
int h,i;
printf("enter the string");
scanf("%s",&s);
printf("enter the number");
scanf(" %d",&h);
for(i=0;i<h;i++)
{
printf("%s\t",s);
}
return 0;
}
