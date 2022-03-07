#include<stdio.h>
int main()
{
int first,second,add,substract,multiply;
float divide ;
printf("Enter the two integers\n");
scanf("%d%d", &first, &second);
add = first + second;
substract = first + second ;
multiply = first * second ;
divide =first/(float)second;
printf("sum = %d\n",add);
printf("difference = %d\n",substract);
printf("multiplication =%d\n",multiply);
printf(" division = %.2f\n",divide);
return 0;

}