#include<stdio.h>
#include<conio.h>
main()
{
	int str,stmin,sphr,spmin;
	int time,tmhr,tmmin;
	scanf("%d",&str);
	scanf("%d",&stmin);
	scanf("%d",&sphr);
	scanf("%d",&spmin);
	printf("\nstarting time=%d hr:%d min",sthr,stmin);
	printf("\nstop time=%d hr:%d min",sphr,spmin);
	if(sphr<sthr)
	{
		spr=spr+12;
	}
	sthr=sthr*60+stmin;
	spr=spr*60+spmin;
	time=spr-sthr;
	if(time<60)
	{
		printf("\n The time difference=00 hr:%d min",time);
	}
	else
	{
	tmhr=time/60;	tmmin=time%60;
	printf("\n The time difference=%d hr:%d min",tmhr,tmmin);
	}
	return 0;
}
    



