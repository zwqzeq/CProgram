//����������������ַ�
#include<windows.h>
#include<stdio.h>
void SlowPrint(char*string,int sleeptime)
{
	int i=0;
	while(string[i]!='\0')
	{
		printf("%c",string[i]);
		Sleep(sleeptime);
		i++;
	}
}
int main()
{
	SlowPrint("��������һ��һ���������ÿ���ַ�",300);
	printf("\n");
	Sleep(2000);
	return 0;
}
