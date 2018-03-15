#pragma<stdio.h>
#define MAX_SIZE 1000
void main()
{
    int N[MAX_SIZE];
    int i,min;
    printf("ENTER VALUE OF N");
    for(i=0;i<10;i++)
    {
        scanf("%d",&N[i]);
    }
    min=N[0];
    for(i=1;i<10;i++)
    {
        if(min>N[i])
        min=N[i];    }
    printf("THE MINIMUM NUMBER IS:\t%d",min);
}
