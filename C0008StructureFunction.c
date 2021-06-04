//Structure with using function . Taking function with argument with no return type
#include<stdio.h>
#include<string.h>

typedef struct student				//typedef define the "Struct Student" as the "S" only
{
 int id;
 char name[20];
 float percentage;
} S;						//typedef to struct student as "S"

void func(S record);				//creating function as a prototype and passing the structure as a argument

void main()
{
 S record;					//creating the object of the structure and name as record
 record.id=1;
 strcpy(record.name,"ABC");			//Inserting the "ABC" in the record.name
 record.percentage = 86.5;
 func(record);
 getchar();					//holding the screen
}

void func(S record)				//function defination
{
 printf("Id is %d \n",record.id);
 printf("Name is %s \n",record.name);
 printf("Percentage is: %.2f \n",record.percentage);
 }
