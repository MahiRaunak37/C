//Count blanks,digits, and total charactors
#include <stdio.h>

int main()
{
 int blanks = 0, digits = 0,total_char = 0;
 int c;
 for( ;(c=getchar()!= E0F; total_char++)
   {
	if(c ==' ')
	 ++blanks;
	else if(c >= '0' && c<= '9')
	 ++digits;
   }
printf("blanks = %d, digits= %d, total_chars = %d\n\n",blanks,digits,total_chars);
 return 0;
}
