#include <stdio.h>
/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */
main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	printf ("�����¶��뻪���¶ȶ��ձ�\n");
		
	lower = 0; 		/* lower limit of temperature scale */
	upper = 300; 	/* upper limit */
	step = 20;		/* step size */
	
	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = (5.0/9.0) * (fahr-32.0);//.1��ʾ��ӡ1λС�� 
		printf("%5.1f %4.0f\n",celsius,fahr); 
		fahr = fahr + step;
	}
}
