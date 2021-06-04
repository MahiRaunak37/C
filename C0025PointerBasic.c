#include<stdio.h>
void main()
{
 int x=5, *j;
 j= &x;
 printf("%d %p \n",x,j);
 printf("%d %p \n",*j,&x);
 printf("%p \n", *&j);
 printf("%d \n",*j);
getchar();
}
