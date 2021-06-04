//linked list of student 
#include<stdio.h>
#include<string.h>

typedef struct student_type
{
 int rollno;
 char name[30];
 int age;
 char Program[25];
 struct student *next;
} student;

student *start = NULL;

student* create_node(int srollno, char *sname, int sage, char *Sprogram)
{
	student *ptr;
	ptr=(student *)malloc(sizeof(student));
	ptr->rollno=srollno;
	ptr->name=sname;
	ptr->age=sage;
	ptr->program=Sprogram;
	ptr->next=NULL;
}
