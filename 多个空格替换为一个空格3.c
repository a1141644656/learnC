#include <stdio.h>

int main(void)
{
	int c;
	while ((c = getchar()) != EOF) 
	{
		 if (c == ' ') 
	 	{
			putchar(c);
		 	while((c = getchar()) == ' ' && c != EOF) //&& 代表"与"  同时成立 
			 	;
		}
		if (c == EOF)
			break; /* the break keyword is mentioned
				* in the introduction... 
				* */

		putchar(c);
	}
	return 0;
} 

