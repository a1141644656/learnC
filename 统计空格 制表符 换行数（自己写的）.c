#include <stdio.h>
main ()
{
	int a,blanks,tabs,newlines;
	blanks = 0;
	tabs = 0;
	newlines = 0;
	while ((a = getchar()) != EOF)
	{
		if (a == ' ') 
			++ blanks;
		if (a == '\t')
			++ tabs;
		if (a == '\n')
			++ newlines;
	}
	printf ("�ո���Ϊ��%d;�Ʊ����Ϊ��%d;���з���Ϊ��%d ",blanks,tabs,newlines);
}
