#include <stdio.h>
void main()
{
 	char ch;
 	char str[100];
 	int i=0;
 	int haveWord=0;

 	while( (ch=getchar()) != '\n')
 	{
  	if(ch!=' ')
  		{
   		str[i++]=ch;
   		if(haveWord==0)
    	haveWord=1;
  		}

  	else if(haveWord==1)
  		{
   		str[i]='\0';
   		printf("%s\n",str);
   		haveWord=0;
   		i=0;
  		}
 	}

	if(haveWord==1)
 	{
  	str[i]='\0';
  	printf("%s\n",str);
 	}
}
