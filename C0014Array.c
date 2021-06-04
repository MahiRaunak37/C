// defination of array
#include<stdio.h>
void main()
{
 int i,n,arr[10];
 printf("\n Enter the size of Array:- ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  printf("Enter the Value of %d :- ",i);
  scanf("%d",&arr[i]);
 }
 printf("\n");

for(i=0;i<n;i++)
 {
 	printf("\t %d",arr[i]);
 }
printf("\n");
getchar();
}
