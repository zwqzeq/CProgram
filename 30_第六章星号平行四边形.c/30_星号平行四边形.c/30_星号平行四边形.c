//�Ǻ�ƽ���ı���
#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=5;i++)//������
	{   for(j=1;j<i;j++)//���ƿո���
	       printf(" ");
	    for(n=1;n<=18;n++)//�����Ǻ���
			printf("*");
		printf("\n");//���ƻ���
	}
	return 0;
}