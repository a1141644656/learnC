#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,b,c,d; /*b����ո�c�����Ʊ����d�����з�*/
 b=0;c=0;d=0; /*intilized*/
 while ((a = getchar()) != EOF)
{       if (a ==' ')//�����������a���бȽϣ�����bcd����Ȼ��һֱ��0��
             b++;
        if (a == '\t')
			c++;
        if (a == '\n')
     		 d++;
      }
 printf("�ո�%3d�Ʊ��%3d���з�%3d\n",b,c,d);//���������whileѭ����
 system("pause");
}
