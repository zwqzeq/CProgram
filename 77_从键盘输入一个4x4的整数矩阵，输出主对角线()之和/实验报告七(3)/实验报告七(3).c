//�Ӽ�������һ��4x4����������������Խ���(\)֮��
#include<stdio.h>
int main()
{
	int i,j,s=0;
	int a[4][4];
	printf("������16��������\n");
	for(i=0;i<4;i++)//i������
		{
			for(j=0;j<4;j++)//j������
			scanf("%d",&a[i][j]);//�Ӽ�������õ�a[0][0]----a[3][3]��ֵ
        }
	printf("array a��\n");
	    for(i=0;i<4;i++)//i������
		{for(j=0;j<4;j++)//j������
		     printf("%5d",a[i][j]);//���
		printf("\n");
		}
		s=a[0][0]+a[1][1]+a[2][2]+a[3][3];//�����Խ���Ԫ�صĺ�
		printf("%d",s);
		printf("\n");
}