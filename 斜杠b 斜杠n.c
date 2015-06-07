#include <stdio.h>
int main (void)
{
	printf ("123456\b\n");
	printf ("12345\b6\n");
	printf ("12345\b\n6\n");
	printf ("12345\n\b6\n");
	printf ("123\n4\b56\n");
	printf ("1\b2\b3\b45\b67\b89\b\n");
	printf ("abc\b\b\b \nde\n");
	printf ("abc\b \nabc\n");
	printf ("abc\b\nabc\n");         //\b \n中间要有个空格 
}
