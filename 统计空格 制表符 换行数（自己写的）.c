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
	printf ("空格数为：%d;制表符数为：%d;换行符数为：%d ",blanks,tabs,newlines);
}
