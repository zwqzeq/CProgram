//����
#include<stdio.h>
#define len 15
int main()
{
	int i,j,n;
	for(i=1;i<=len;i++)//������������ʮ��
	{   for(n=1;n<=len-i;n++)
	printf(" ");//���ƿո�
	    for(j=1;j<=2*i-1;j++)
			printf("*");//�����Ǻ�
		printf("\n");
	}
	for(i=len-1;i>=1;i--)//���������������
	{   for(n=len-1;n>=i;n--)
	     printf(" ");//���ƿո�
	    for(j=1;j<=2*i-1;j++)
			printf("*");//�����Ǻ�
		printf("\n");//����
	}
}