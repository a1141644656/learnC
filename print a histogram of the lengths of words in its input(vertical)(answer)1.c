#include<stdio.h>

#define IN  1;           /*������*/
#define OUT 0;         /*������*/

main()
{
	int i, c , state;
	int nword[25];  /*���ʿ��ܵĳ��ȡ����ﶨ����ĳ���Ϊ25*/

	for(i=0; i<25; ++i)
    nword[i]=0;        /*�Ѹ��ֳ��ȵĵ��ʸ���������Ϊ0��*/

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
