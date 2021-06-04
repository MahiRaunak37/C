//Sorting an array using Pointer in c 
#include<stdio.h>
void swap(int *p,int x,int y);

int main()
{
 int a[10];
 int i=0,j=0;

 for(i=0;i<10;i++)
 {
  printf("Enter the value of array for position %d :",i);
  scanf("%d",&a[i]);
 }

 for(i=0;i<10;i++)
  for(j=0;j<10;j++)
	{
 	 if(a[i]>a[j])
		swap(a,i,j);
	}
printf("\n After sorting:- ");
 for(i=0;i<10;i++)
  {
	printf("\n %d",*(a+i));
 }
return 0;
}

void swap(int *p,int x, int y)
{
	int temp = *(p+x);
	p[x] = p[y];
	*(p+y) = temp;
}
