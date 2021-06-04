//format and actual argument using the pointer
#include<stdio.h>

int  sum(int *a, int *b);		//Formal argument (This is also called the function prototype)
void main()
{
 int n1,n2,s1;
 printf("Enter the value of n1:- ");
 scanf("%d",&n1);
 printf("Enter the value of n2:- ");
 scanf("%d",&n2);
 sum(&n1,&n2);		//Actual Argument 
 printf("\n");
 getchar();
}

int sum(int *a,int *b)
{
 int S;
 S= *a + *b;
 printf("Sum:- %d ",S);
}

