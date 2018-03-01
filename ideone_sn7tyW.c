#include<stdio.h>
void main()
{
char a[100];
int i,d,w;
get(a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>'a'||a[i]<'z')&&(a[i]>'A'||a[i]<'Z'))
w++;
else 
d++;
}
if(d>0&&w>0)
printf("Yes");
else
printf("No");
}