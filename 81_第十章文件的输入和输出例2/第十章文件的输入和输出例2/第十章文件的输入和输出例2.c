#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   
	FILE *in,*out;
	char ch,infile[10],outfile[10];
	char filepath[]={"E:\\C����\\52_��ʮ�� ���ļ�������������1\\��ʮ�¶��ļ�������������1\\"};
	char filepath2[]={"E:\\C����\\��ʮ���ļ�������������2\\��ʮ���ļ�������������2\\"};
	
	printf("����������ļ������֣�");
	scanf("%s",infile);
	printf("����������ļ������֣�");
	scanf("%s",outfile);
	if((in=fopen(strcat(filepath,infile),"r"))==NULL)
	{
        printf("�޷���%s�ļ�\n",infile);
		exit(0);
	}
	if((out=fopen(strcat(filepath2,outfile),"w"))==NULL)
	{
        printf("�޷���%s�ļ�\n",outfile);
		exit(0);
	}
	while(!feof(in))
	{
        ch=fgetc(in);
		fputc(ch,out);
		putchar(ch);
	}
	putchar(10);
	fclose(in);
	fclose(out);
     return 0;
}
