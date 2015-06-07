//来源百度贴吧http://tieba.baidu.com/p/1795338852#23153578966l


#include <stdio.h>         
#include <windows.h>
int main (void)
{
	char Command;
	
	HWND hWnd;   //句柄   可以把两个都理解为我们熟悉的int，他们都是数字，只不过叫法不同 
	DWORD Pid;   //汉字   相当于程序的学生证和身份证 
	
	HANDLE hProcess = 0;    //HANDLE与HWMD DWORD一样 用来证明程序身份 
	
	while (1)
	{
	printf ("----------------------双星物语2游戏外挂----------------------\n"); 
	printf ("      打开外挂       O                  修改金钱      M      \n"); 
	printf ("      修改血量       H                  推出外挂      E      \n");
	printf ("-------------------------------------------------------------\n");
	Command = getchar();
	getchar();   //用来抵消回车	
	if (Command == 'E' || Command == 'e')
	{
		break;
	}
	else
	{
		if (Command == 'O' || Command == 'o')
		{
			hWnd = FindWindow(NULL,"双星物语2");   //FindWindow就是靠名字来取得这个游戏程序的句柄
			
			if (hWnd != 0)
			{
				GetWindowThreadProcessId(hWnd,&Pid);   //GetWindowThreadProcessId是靠句柄取得PID
				hProcess = OpenProcess(PROCESS_ALL_ACCESS,FALSE,Pid);
				
				if (hProcess = 0)
				{
					printf ("\n打开游戏进程失败\n");
				}
				else
				{
					printf ("\n成功打开游戏进程\n"); 
				}
			}
		}
		
		if (Command == 'M' || Command == 'm')
		{
			if (hProcess == 0)
			{
				printf ("\n请先打开外挂\n");
			}
			else 
			{
				DWORD Money;
				DWORD Add = 0x005b85b0   //用cheat engine找出的地址	 
				
				scanf ("你想要多少钱？：%ld",&Money);
				
				DWORD res = WriteProcessMemory(hProcess,(LPVOID)Addr,&Money,4,0); //WriteProcessMemory(hProcess,(LPVOID)Addr,&HP,4,0);为修改内存函数，4为4字节也就是DWORD，int的大小，一般金钱和经验，血量都是以DWORD的形式存储的 
				if (res == 0)
				{
					printf ("\n修改失败\n");
				}
				else 
				{
					printf ("\n修改成功\n")； 
				}
			}
		}
	}
	}
	return 0;	
}
