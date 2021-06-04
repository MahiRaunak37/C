#include <stdio.h>
int fact(int);

int main()
{
 int n,f;
 printf("Enter the value of n:- ");
 scanf("%d",&n);
 f=fact(n);
 printf("Factorial of %d is %d\n",n,f);
 return 0;
}

int fact(int n)
{
 if(n==1)
  return 1;
 else
  return fact(n-1)*n;
}
