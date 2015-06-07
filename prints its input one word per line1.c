#include <stdio.h> 
int main(void)
{
	int c,d;
	d = 0;
	while ((c = getchar()) != EOF)
		{
			if (c == '\t' || c == ' ' || c == '\n')
			{
				if (d == 0)
				{
					printf ("\n");
					d = 1;
				}
			}
			else
			{ 
				putchar (c);
				d = 0;
			}
		}
	return 0;
}
