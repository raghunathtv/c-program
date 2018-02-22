#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,
     sum=0,a[60];
    avg=0;
    scanf("%u",&n);
    for(i=0;i<n;i++)
    {        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {        sum=sum+a[i];        
    }
    avg=sum/n;
printf("%d",avg);
}

    



