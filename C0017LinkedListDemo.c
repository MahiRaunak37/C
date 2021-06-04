//creating a node
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
 int rollno;
 struct node *next;
}N;

N *temp= (N*) malloc(sizeof(N));

