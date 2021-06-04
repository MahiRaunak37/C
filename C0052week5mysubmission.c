#include <stdio.h>

int main()
{
 float Average = 0.0;
 int i,n;
 printf("\n Enter the no. of elephant- ");
 scanf("%d",&n);
 float elephant_seal_data[n];
 for(i =0; i<n;i++)
  {
   printf("Enter the weight of %dth Elephant.",i);
   scanf("%f",&elephant_seal_data[i]);
  }
 printf("Weight of Elephant are:- ");
 for(i=0;i<n;i++)
  printf("%.2f\t",elephant_seal_data[i]);
 printf("\n");
 //Average
 for(i=0;i<n;i++)
  Average= Average+elephant_seal_data[i];
 Average =Average/n;
 printf("\n Average of elephant seal data is %.3f\n",Average);
 
 return 0;
}

