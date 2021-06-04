/*
1. Pointer is a variable storing an address
2. pointer is not storing the actual value of I
*/

#include<stdio.h>
void main()
{
 int i=5;					//creating and declaring the variable i
 int *ptr;					//creating an integer type pointer variable
 ptr=&i;					//storing the address of i in the pointer variable ptr

 printf("\n Value of i is %d",i);		//printing the value of integer
 printf("\n Value of ptr is %p",ptr);		//printing the address of pointer which store in "ptr"
 printf("\n Value of *ptr is %d",*ptr);		//printing the value which store at the address of ptr

 getchar();
}
