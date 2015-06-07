#include<stdio.h>

#define IN  1;           /*单词中*/
#define OUT 0;         /*单词外*/

main()
{
	int i, c , state;
	int nword[25];  /*单词可能的长度。这里定义最长的长度为25*/

	for(i=0; i<25; ++i)
    nword[i]=0;        /*把各种长度的单词个数。定义为0个*/

    i=0;
    state=OUT;

	while( (c=getchar()) != EOF )
    {
		if( c==' ' || c=='\n' || c=='\t')
		{
			state = OUT;
		}
		
		else  if( c>='a' && c<='z' || c>='A' && c<='Z')
		{
			if (state = IN)
			{
				++i;
			}
			else
			{	
				state = IN;
				++nword[i];
				i=1;
			}
		}
	}
}
