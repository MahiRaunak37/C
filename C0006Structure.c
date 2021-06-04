#include<stdio.h>
#include<string.h>

struct student
{
 int id;
 char name[30];
 float percentage;
};

int main()
{
 int i;
 struct student record[2];
 record[0].id=1;
 strcpy(record[0].name,"raunak");
 record[0].percentage=72.6;

 record[1].id=2;
 strcpy(record[1].name,"mahi");
 record[1].percentage=79.7;
 printf("%d \n",record[0].id);
 printf("%s \n",record[0].name);
 printf("%.2f \n",record[0].percentage);

 return 0;
}
