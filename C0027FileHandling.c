#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int i;
 char s[100];
 FILE *fp;
 fp=fopen("f1.txt","w");
 if(fp==NULL)
 {
  printf("File cannot open");
  exit(1);
 }
 printf("Enter a string");
 gets(s);
 for(i=0;i<strlen(s);i++)
  fputc(s[i],fp);
  getchar();
  fclose(fp);
 getchar();
}
