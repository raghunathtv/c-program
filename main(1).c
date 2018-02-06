#include <stdio.h>
#include<string.h>
int main()
{
	char a[37],c[69];
	int i,k;
	printf("enter the string");
	scanf("%s",a);
	printf("enter the k values");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		c[i]=a[i];
	}
		printf("%s",c);
	
	
	return 0;
}