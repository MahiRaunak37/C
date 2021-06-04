 #include <stdio.h>
int main()
{
 const int size = 5;
 int grades[5]={40,30,45,50,20};
 double sum = 0.0;
 double* ptr_to_sum;
  ptr_to_sum = &sum;
 int i;

 printf("\n my grades are:- \n");
 for(i=0;i<size;i++)
  sum =sum +grades[i];
 printf("my average is %.2f \n\n",sum/size);
 printf("\n \n");
 printf("sum is at %p, or %p and is %.3lf\n",ptr_to_sum,ptr_to_sum,*ptr_to_sum);
 printf("grades are %d to %d\n",*grades,*(grades+4));
 return 0;
}
