#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if((a*b)%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}