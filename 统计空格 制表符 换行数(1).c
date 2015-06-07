#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,b,c,d; /*b代表空格，c代表制表符，d代表换行符*/
 b=0;c=0;d=0; /*intilized*/
 while ((a = getchar()) != EOF)
{       if (a ==' ')//这里是输入的a进行比较，不是bcd。不然就一直是0了
             b++;
        if (a == '\t')
			c++;
        if (a == '\n')
     		 d++;
      }
 printf("空格%3d制表符%3d换行符%3d\n",b,c,d);//把输出放在while循环外
 system("pause");
}
