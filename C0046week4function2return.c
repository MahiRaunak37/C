#include <stdio.h>

/*
int sum(double,double);
int main()
{
 int c;
 c = sum(5,6);
 printf("%d",c);
 return 0;
}

int sum(double a,double b)
{
 return a+b;
}
*/

double sum(int ,int);
int main()
{
 double c;
 c = sum(5,6);
 printf("%lf\n",c);
 return 0;
}

double sum(int a, int b)
{
 return a+b;
}

