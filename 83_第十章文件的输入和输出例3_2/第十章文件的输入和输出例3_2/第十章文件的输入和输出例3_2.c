#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[3][10];
	int i=0;
	if((fp = fopen("E:\\C����\\��ʮ���ļ�������������3\\��ʮ���ļ�������������3\\string.dat","r"))==NULL)
	{
		printf("can't open file!");
		exit(0);
	}
	while(fgets(str[i],10,fp)!=NULL)
	{
		printf("%s",str[i]);
		i++;
	}
	fclose(fp);
	return 0;
}