#include <stdio.h>
int sum(int,int);

int main(void)
{
 int a=0, b=0,c;
 printf("Enter the value of a and b:- ");
 scanf("%d %d",&a,&b);
 c=sum(a,b);
 printf("Sum of two numbers are:- %d \n",c);
 return 0;
}

int sum(int a,int b)
{
 return a+b;
}
