#include <stdio.h>
#include <stdlib.h>

#define IN 1		 /* inside a word */
#define OUT 0 		/* outside a word */
					/* count lines, words, and characters in input */
main()
{
	int c, nl, nw, nc, state;
	
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) 
		{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c== '\n' || c == '\t')    //   ||  表示逻辑"或"    从左到右进行判断 
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
