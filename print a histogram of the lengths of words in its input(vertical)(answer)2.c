#include <stdio.h>  
#define MAXWORDLEN 10//最长单词长度   
  
int main(void)  
{  
  int c;  
  int inspace = 0;//是空白符   
  long lengtharr[MAXWORDLEN + 1];//记录长度为wordlen的单词个数   
  int wordlen = 0;//单词长度   
  
  int firstletter = 1;//首次出现的字符是否为空字符的判定，只能判定一次   
  long thisval = 0;//当前长度单词个数  
  long maxval = 0;//多有长度单词中，最多单词个数   
  int thisidx = 0; //当前单词长度   
  int done = 0;//循环条件   
  
  for(thisidx = 0; thisidx <= MAXWORDLEN; thisidx++)//初始化   
  {  
    lengtharr[thisidx] = 0;  
  }  
  
  while(done == 0)  
  {  
    c = getchar();  
  
    if(c == ' ' || c == '/t' || c == '/n' || c == EOF) //输入单词为以上空白   
    {  
      if(inspace == 0)//inspace  
      {  
        firstletter = 0;//首字符置零   
        inspace = 1;//出现空白符 inspace符置1   
  
        if(wordlen <= MAXWORDLEN)//单词长度小于最大长度   
        {  
          if(wordlen > 0)//单词长度不为0   
          {  
            thisval = ++lengtharr[wordlen - 1];//单词长度为wordlen - 1的个数   
            if(thisval > maxval)//更新 maxval  
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
      if(c == EOF)//结束符   
      {  
        done = 1;  
      }//if(c == EOF)   
    }//if(c == ' ' || c == '/t' || c == '/n' || c == EOF)  
    else  
    {  
      if(inspace == 1 || firstletter == 1)//首个非空白符   
      {  
        wordlen = 0;  
        firstletter = 0;  
        inspace = 0;//出现非空白符  inspace 置 0  
      }  
      ++wordlen;  
    }  
  }  
  
  for(thisval = maxval; thisval > 0; thisval--)  
  {  
    printf("%4d  | ", thisval);//打印纵坐标 及位置   
    for(thisidx = 0; thisidx <= MAXWORDLEN; thisidx++)//打印直方图   
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
  printf("      +");//打印原点   
  for(thisidx = 0; thisidx <= MAXWORDLEN; thisidx++)  
  {  
    printf("---");//打印横坐标   
  }  
  printf("/n       ");  
  for(thisidx = 0; thisidx < MAXWORDLEN; thisidx++)//打印横坐标位置   
  {  
    printf("%2d ", thisidx + 1);  
  }  
  printf(">%d/n", MAXWORDLEN);  
  getchar();  
  return 0;  
}  
