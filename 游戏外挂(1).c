//��Դ�ٶ�����http://tieba.baidu.com/p/1795338852#23153578966l


#include <stdio.h>         
#include <windows.h>
int main (void)
{
	char Command;
	
	HWND hWnd;   //���   ���԰����������Ϊ������Ϥ��int�����Ƕ������֣�ֻ�����з���ͬ 
	DWORD Pid;   //����   �൱�ڳ����ѧ��֤�����֤ 
	
	HANDLE hProcess = 0;    //HANDLE��HWMD DWORDһ�� ����֤��������� 
	
	while (1)
	{
	printf ("----------------------˫������2��Ϸ���----------------------\n"); 
	printf ("      �����       O                  �޸Ľ�Ǯ      M      \n"); 
	printf ("      �޸�Ѫ��       H                  �Ƴ����      E      \n");
	printf ("-------------------------------------------------------------\n");
	Command = getchar();
	getchar();   //���������س�	
	if (Command == 'E' || Command == 'e')
	{
		break;
	}
	else
	{
		if (Command == 'O' || Command == 'o')
		{
			hWnd = FindWindow(NULL,"˫������2");   //FindWindow���ǿ�������ȡ�������Ϸ����ľ��
			
			if (hWnd != 0)
			{
				GetWindowThreadProcessId(hWnd,&Pid);   //GetWindowThreadProcessId�ǿ����ȡ��PID
				hProcess = OpenProcess(PROCESS_ALL_ACCESS,FALSE,Pid);
				
				if (hProcess = 0)
				{
					printf ("\n����Ϸ����ʧ��\n");
				}
				else
				{
					printf ("\n�ɹ�����Ϸ����\n"); 
				}
			}
		}
		
		if (Command == 'M' || Command == 'm')
		{
			if (hProcess == 0)
			{
				printf ("\n���ȴ����\n");
			}
			else 
			{
				DWORD Money;
				DWORD Add = 0x005b85b0   //��cheat engine�ҳ��ĵ�ַ	 
				
				scanf ("����Ҫ����Ǯ����%ld",&Money);
				
				DWORD res = WriteProcessMemory(hProcess,(LPVOID)Addr,&Money,4,0); //WriteProcessMemory(hProcess,(LPVOID)Addr,&HP,4,0);Ϊ�޸��ڴ溯����4Ϊ4�ֽ�Ҳ����DWORD��int�Ĵ�С��һ���Ǯ�;��飬Ѫ��������DWORD����ʽ�洢�� 
				if (res == 0)
				{
					printf ("\n�޸�ʧ��\n");
				}
				else 
				{
					printf ("\n�޸ĳɹ�\n")�� 
				}
			}
		}
	}
	}
	return 0;	
}
