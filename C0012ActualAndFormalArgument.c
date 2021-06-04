
#include<stdio.h>

int  sum(int a, int b);		//Formal argument (This is also called the function prototype)
void main()
{
 int n1,n2,s1;
 printf("Enter the value of n1:- ");
 scanf("%d",&n1);
 printf("Enter the value of n2:- ");
 scanf("%d",&n2);
 s1 = sum(n1,n2);		//Actual Argument 
 getchar();
}

int sum(int n1,int n2)
{
 int S;
 S= n1+n2;
 printf("Sum:- %d ",S);
}

