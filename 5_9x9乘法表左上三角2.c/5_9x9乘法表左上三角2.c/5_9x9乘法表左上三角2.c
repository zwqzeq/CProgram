//9x9�˷�������������
#include<stdio.h>
int main()
{int i,j;
for(i=1;i<=9;i++)
{ for(j=1;j<=10-i;j++)//����������ǰ�����ټ���
		printf("%d*%d=%-3d",i,j,i*j);
printf("\n");
}	return 0;
}