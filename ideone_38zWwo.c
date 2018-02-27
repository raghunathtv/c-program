#include<stdio.h>
int main()
{
    int n,num;
    scanf("%d",&num);
    while(num!=0)
    {
        if(num%7==0)
        {
            printf("yes");
            break;
    	}
    	else
    	{
    		 printf("no");
    		 break;
		}
    }
    return 0;
}