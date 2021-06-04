#include <stdio.h>
int foobar(int* n);
int main()
{
 int k = 6;
 printf("foobar(k) = %d,",foobar(&k) );
 printf(" k = %d\n", k);
 return 0;
}
int foobar(int* n)
{
     *n = *n +1;
     return *n;
}
