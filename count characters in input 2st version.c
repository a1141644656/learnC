#include <stdio.h>
/* count characters in input; 2nd version */
main()
{
	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		;                              /*the grammatical rules of C require that a for statement have a body. The isolated semicolon, called a null statement, is there to satisfy that requirement. */
	printf("%.0f\n", nc);
}
