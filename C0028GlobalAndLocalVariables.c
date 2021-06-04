#include <stdio.h>
int global_var = 10;
void display();
int main()
{
 int local_var = 20;
 printf("Global Variable:- %d",global_var);
 printf("\nLocal Variable:- %d\n",local_var);
 display();
return 0;
}
 void display()
 {
  printf("Variable inside the function:- %d \n",global_var);
 }

