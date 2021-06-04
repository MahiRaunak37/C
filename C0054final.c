#include <stdio.h>
int mystery(int,int);

int main()
{
 int f;
 f= mystery(2,6);
 printf("%d",f);
 return 0;
}
int mystery(int p, int q)
{
 int r;
 if((r=p%q)==0)
  return q;
 else return mystery(q,r);
}
