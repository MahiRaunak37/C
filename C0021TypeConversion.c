#include<stdio.h>
#define PriceOfA 32.8
#define PriceOfB 15.6
 
void main()
{
 int numA=18, numB=9;
 float cost;
 cost = ((float)numA/12)*PriceOfA +((float)numB/12)*PriceOfB;
 printf("\n %f",cost);
 getchar();
}
