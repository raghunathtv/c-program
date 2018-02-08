#include <stdio.h>
int main() 
{
int a,k,j,n;
printf("enter the number:");
scanf("%d",&a);
int b[a];
for(k=1;k<=a;k++)
{
scanf("%d",&b[k]);	
}
for(k=1;k<=a;k++)
{
	
for(j=k+1;j<=a;j++)
{
	
if(b[k]>b[j])
{
	n=b[k];
	b[k]=b[j];
	b[j]=n;
}
}
}
printf("\n Output\n %d",b[(a/2+1)]);
}
