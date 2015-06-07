#include <stdio.h>
#include <ctype.h>
#define MAXWORD 11
#define IN 1
#define OUT 0

int main(int argc, char *argv[])
{
	int c, i, n, maxw, aw[MAXWORD], status, nwords;

	maxw = nwords = 0;
	for(i = 0; i < MAXWORD; ++i)
		aw[i] = 0;
	status = OUT;


	while((c = getchar()) != EOF)
	{
		if(isspace (c))
		{
			status = OUT;
			if(nwords > 0)
			{
				if(nwords < MAXWORD)
					++aw[nwords];
				else ++aw[0];
			}

			nwords = 0;
		}
		else if(status == OUT)
			status = IN;
		if(status == IN)
			++nwords;
	}


	for(i = 0; i < MAXWORD; ++i)
	{
		if(aw[i] > maxw)
			maxw = aw[i];
	}


	for(i = maxw; i > 0; --i)
	{
		printf("%4d |", i);
		for(n = 1; n < MAXWORD; ++n)
		{
			if(aw[n] >= i)
				printf("   *");
			else printf("    ");
		}
		if(aw[0] >= i)
			printf("   *");
		else printf("    ");
		putchar('\n');
	}
	
	printf("     +");
	for(i = 0; i < MAXWORD; ++i)
		printf("----");
	putchar('\n');
	
	printf("      ");
	for(i = 1; i <= MAXWORD; ++i)
	{
		if(i == MAXWORD)
			printf(" >10");
		else printf("%4d", i);
	}
	putchar('\n');	

	return 0;
}

