#include<stdio.h>
 int main()
{
 int binary,decimal,c;
    binary= (c == '0' || c == '1' );

   
    decimal = (c == '2' || c == '3' || c == '4' || c == '5' || c == '6'||c == '7' || c == '8' || c == '9');

scanf("%d",&c);
  
    if (c<=binary)
        printf("%c is a binary", c);
    else
        printf("%c is a decimal.", c);
    return 0;
}