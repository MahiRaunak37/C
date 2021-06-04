#include <stdio.h>
int main()
{
  int i=1,j=2,n;
  n=(i==j)?4:(i<j)?3:5;
  n=i,j+1;
  n=(i<j)?4:6;
  printf("%d",n);
  return 0;
}
