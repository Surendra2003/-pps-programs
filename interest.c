#include<stdio.h>
int main()
{
    int p,t,r,intrest,amount;
    p=100000;
    t=60;
    r=3;
 intrest=p*t*r/100;
 amount=p+intrest;
 printf("simple intrest .....%d\n",intrest );
printf("total amount is .....%d\n",amount);
 return 0;
}