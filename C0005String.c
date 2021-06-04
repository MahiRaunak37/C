#include<stdio.h>
#include<string.h>
int main()
{
 char str1[6]="hello";
 char str2[]=" world";					//string decleartion
 printf("Value store in 1st String %s\n",str1);		//printing the string
 printf("%d\n",(int)strlen(str1));
 printf("Value store in 2nd String %s\n",str2);		//printing the size of element
 printf("%d\n",(int)strlen(str2));			//printing the size of 2nd string
 strcpy(str2,str1);					//Copy value of str1 to str2 (Before "str1="hello","str2=world") (After "str1="hello" str2="hello") 
 printf("Value store in 1st String %s\n",str1);
 printf("Value store in 2nd String %s\n",str2);
 printf("\n");
 return 0;
}
