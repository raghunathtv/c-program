#include<stdio.h>
int main()
{
	int a,c=0;
	scanf("%d",&a);
	for(int i=0;i<10;i++)
	{
		if(a==i)
		{
			c++;
		}
	}
	if(c==1)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	return 0;
}