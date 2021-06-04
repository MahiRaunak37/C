#include <stdio.h>
void recursive(int);

int main()
{
 int n=0;
 printf("Enter the value of n:- ");
 scanf("%d",&n);
 recursive(n);
 return 0;
}

void recursive(int n)
{
 if(n==0)
  printf("Recursive function stop\n");
 else {
   printf("Time is %d \n",n);
   recursive(n-1);
  }
}
