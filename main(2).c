
#include <stdio.h>
int main()
{
  int x,y,temp;
  printf("enter the values of x and y:");
  scanf("%d%d",&x,&y);
  printf("before swapping x=%d y=%d",x,y);
  temp=x;
  x=y;
  y=temp;
  printf("after swapping x=%d y=%d",x,y);

    return 0;
}


