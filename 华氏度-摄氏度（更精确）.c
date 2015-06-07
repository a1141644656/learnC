#include <stdio.h>
/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */
main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	printf ("华氏温度与摄氏温度对照表\n");
		
	lower = 0; 		/* lower limit of temperature scale */
	upper = 300; 	/* upper limit */
	step = 20;		/* step size */
	
	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = (5.0/9.0) * (fahr-32.0);//.1表示打印1位小数 
		printf("%3.0f %6.1f\n",fahr,celsius); 
		fahr = fahr + step;
	}
}
