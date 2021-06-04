#include <stdio.h>
double average_grades(int,int);
void print_grades(int,int);

int main()
{
 int grades[5] ={78,67,97,83,88};
 print_grades(5,grades);
 printf("\n \n");
 printf("my average is %.2f\n\n",average_grades(5,grades)):
 return 0;
}

double average_grades(int how_many, int grades[])
{
 int i;
 double sum = 0.0;
 for(i=0;i<how_many;i++)
 {
  sum = sum + grades[i]l
 }
 return (sum/how_many);
}

void print_grades(int how_many, int grades[])
{
 printf("I have %d grades\n",how_many);
  for(i=0;i<how_many;i++)
   printf("%d\t",grades[i]);
}
