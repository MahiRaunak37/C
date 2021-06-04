//Fareheit to Celsius
#include<stdio.h>

int main()
{
 int far, cel;
 printf("Enter the fahreheit as an integer:- ");
 scanf("%d",&far);
 cel=(far-32)/1.8;
 printf("Value in celsius in an integer:- %d\n",cel);
 return 0;
}
