#include <stdio.h>
void wrt_very(int);

int main()
{
 int repeat =0;
 printf("How strong is your love 1-10?: ");
 scanf("%d",&repeat);
 printf("\n I love you very");
 wrt_very(repeat);
 return 0;
}

void wrt_very(int count)
{
 while(count >0)
 {
  printf("\n very");
  count--;
  }
 printf("much.\n\n");
}
