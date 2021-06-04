#include <stdio.h>
#include <math.h>

int main()
{
 float a,b, num;
 printf("Please enter a number from keyboard to find it's sin value\n");
 scanf("%f", &num);

  a = sin(num);
  b = cos(num);

 printf("value in sin is = %.4f\n", a);
 printf("value in con is = %.4f\n", b);
return 0;

}
