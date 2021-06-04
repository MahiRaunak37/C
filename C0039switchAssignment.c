#include <stdio.h>

int main()
{
 int i;
 printf("Enter the value of i:- ");
 scanf("%d",&i);

 switch(i)
 {
  case 1:
	printf("Case 1 \n");
	break;
  case 2:
	printf("Case 2\n");
  case 3:
	printf("Case 3\n");
	break;
   default:
	printf("default case \n");
 }
} 
