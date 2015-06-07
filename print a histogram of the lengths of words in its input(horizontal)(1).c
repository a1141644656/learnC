#include <stdio.h>
int main (void)
{
	int c,b,d,e,f,g,h,i;
	int a[30];     //定义最长单词为30
	b=c=d=e=f=g=h=0; 
	for (i = 0; i < 30; ++i)
		a[i] = 0;
	while ((c = getchar()) != EOF)
	{		
		if (c != ' ' && c != '\n' && c != '\t')
			{
				++b;
			}
		else 
			++a[b];
			b = 0;
	}

	printf ("%d",b);
	for (i = 0; i < 30; ++i);
		printf (" %d",a[i]);
	return 0;
}
