#include <stdio.h>
/* count digits, white space, others */
main()
{
	int c, i, nwhite, nother;
	int ndigit[10];     			//digit[10]���������Ӧ�ĸ������ֵĴ�����ndigit[0]���0�Ĵ���������ndight[9]���9�Ĵ���
	nwhite = nother = 0;      		//�Լ�����������
	for (i = 0; i < 10; ++i)		
		ndigit[i] = 0;         		//�Լ�����������
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];  		//����ASCII���ʾ�ģ����統��⵽�����������'0'ʱ++ndigit[c-'0']��Ϊ++ndigit[0-0],����⵽�����������'5'ʱ++ndigit['5'-'0'=5]��Ϊ++ndigit[5]
									//c-'0'  ASCII������,0~9 �ı����� 0x30~0x39, ���Ե�c�ڡ�0'~'9'�ķ�Χ��ʱ��c - '0' ���൱�ڼ���c��ʵ����ֵ������ c �� '1', �� c - '0' = 1, ���ַ�ֵתΪ����ֵ��
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
