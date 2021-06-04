#include <stdio.h>
#define PI 3.14159
int main()
{
 float radius;
 double volume;
 printf("Enter the radius:- ");
 scanf("%f",&radius);
 volume =(4/3)*(PI*radius*radius*radius);
 printf("volume of Sphere:- %f",volume);
 return 0;
}
