#include <stdio.h>
/* count digits, white space, others */
main()
{
	int c, i, nwhite, nother;
	int ndigit[10];     			//digit[10]用来存放相应的各个数字的次数，ndigit[0]存放0的次数，，，ndight[9]存放9的次数
	nwhite = nother = 0;      		//对计数变量清零
	for (i = 0; i < 10; ++i)		
		ndigit[i] = 0;         		//对计数数组清零
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];  		//这是ASCII码表示的，比如当检测到输入的数字是'0'时++ndigit[c-'0']即为++ndigit[0-0],当检测到输入的数字是'5'时++ndigit['5'-'0'=5]即为++ndigit[5]
									//c-'0'  ASCII编码中,0~9 的编码是 0x30~0x39, 所以当c在‘0'~'9'的范围中时，c - '0' 就相当于计算c的实际数值，例如 c 是 '1', 则 c - '0' = 1, 把字符值转为数字值了
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;	
	
	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n",
		nwhite, nother);
}
