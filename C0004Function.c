#include<stdio.h>
void main()
{
 printf("\n Enter the value of 1st 








 char a;
 printf("\n Choise any one operator:- \n 1.Sum \t\t\t 2.Sub\n 3.Mul \t\t\t 4.Div");
 scanf("%d",&a);
 switch(a)
 {
   case 1:
 	sum();
	break;
   case 2:
	Sub();
	break;
   case 3:
	Mul();
  	break;
   case 4:
	Div();
	break;
   default:
	printf("\n Invalid Input");
 }

