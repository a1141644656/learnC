#include <stdio.h>  
#define MAXWORDLEN 10//����ʳ���   
  
int main(void)  
{  
  int c;  
  int inspace = 0;//�ǿհ׷�   
  long lengtharr[MAXWORDLEN + 1];//��¼����Ϊwordlen�ĵ��ʸ���   
  int wordlen = 0;//���ʳ���   
  
  int firstletter = 1;//�״γ��ֵ��ַ��Ƿ�Ϊ���ַ����ж���ֻ���ж�һ��   
  long thisval = 0;//��ǰ���ȵ��ʸ���  
  long maxval = 0;//���г��ȵ����У���൥�ʸ���   
  int thisidx = 0; //��ǰ���ʳ���   
  int done = 0;//ѭ������   
  
  for(thisidx = 0; thisidx <= MAXWORDLEN; thisidx++)//��ʼ��   
  {  
    lengtharr[thisidx] = 0;  
  }  
  
  while(done == 0)  
  {  
    c = getchar();  
  
    if(c == ' ' || c == '/t' || c == '/n' || c == EOF) //���뵥��Ϊ���Ͽհ�   
    {  
      if(inspace == 0)//inspace  
      {  
        firstletter = 0;//���ַ�����   
        inspace = 1;//���ֿհ׷� inspace����1   
  
        if(wordlen <= MAXWORDLEN)//���ʳ���С����󳤶�   
        {  
          if(wordlen > 0)//���ʳ��Ȳ�Ϊ0   
          {  
            thisval = ++lengtharr[wordlen - 1];//���ʳ���Ϊwordlen - 1�ĸ���   
            if(thisval > maxval)//���� maxval  
            {  
              maxval = thisval;  
            }//if(thisval > maxval)  
          }//if(wordlen > 0)  
        }//if(wordlen <= MAXWORDLEN)  
        else  
        {  
          thisval = ++lengtharr[MAXWORDLEN];  
          if(thisval > maxval)  
          {  
            maxval = thisval;  
          }//if(thisval > maxval)  
        }//else  
      }//if(inspace == 0)  
      if(c == EOF)//������   
      {  
        done = 1;  
      }//if(c == EOF)   
    }//if(c == ' ' || c == '/t' || c == '/n' || c == EOF)  
    else  
    {  
      if(inspace == 1 || firstletter == 1)//�׸��ǿհ׷�   
      {  
        wordlen = 0;  
        firstletter = 0;  
        inspace = 0;//���ַǿհ׷�  inspace �� 0  
      }  
      ++wordlen;  
    }  
  }  
  
  for(thisval = maxval; thisval > 0; thisval--)  
  {  
    printf("%4d  | ", thisval);//��ӡ������ ��λ��   
    for(thisidx = 0; thisidx <= MAXWORDLEN; thisidx++)//��ӡֱ��ͼ   
    {  
      if(lengtharr[thisidx] >= thisval)  
      {  
        printf("*  ");  
      }  
      else  
      {  
        printf("   ");  
      }  
    }  
    printf("/n");  
  }  
  printf("      +");//��ӡԭ��   
  for(thisidx = 0; thisidx <= MAXWORDLEN; thisidx++)  
  {  
    printf("---");//��ӡ������   
  }  
  printf("/n       ");  
  for(thisidx = 0; thisidx < MAXWORDLEN; thisidx++)//��ӡ������λ��   
  {  
    printf("%2d ", thisidx + 1);  
  }  
  printf(">%d/n", MAXWORDLEN);  
  getchar();  
  return 0;  
}  
