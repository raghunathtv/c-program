#include<stdio.h>
main()
{
    int i,n;
    int sum=0,a[60];
    int avg=0;
    scanf("%u",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        
    }
    avg=sum/n;
printf("%d",avg);
}

    



