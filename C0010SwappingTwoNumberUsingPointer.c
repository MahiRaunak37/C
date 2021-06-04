#include<stdio.h>
void swap(int *p1, int *p2);		//function proto type

void main()
{
 int a,b;
 printf("\n Enter the value of a:- ");
 scanf("%d",&a);
 printf("\n Enter the value of b:- ");
 scanf("%d",&b);
 printf("\n Before Swapping of number %d and %d",a,b);
 swap(&a,&b);
 printf("\n After Swapping of number %d and %d",a,b);
 printf("\n");
 getchar();
}

void swap(int *p1,int *p2)
{
 int temp;
 temp=*p1;
 *p1=*p2;
 *p2= temp;
}
