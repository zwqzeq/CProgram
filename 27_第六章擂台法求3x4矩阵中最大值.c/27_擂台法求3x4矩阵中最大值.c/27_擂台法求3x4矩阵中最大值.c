//��̨���󼸸����е����ֵ
#include<stdio.h>
int main()
{
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};/*�������鲢����ֵ��ע���б��б���㿪
	ʼ����û��a[3][4]���Ԫ��*/
	int i,j,row=0,colum=0,max;
    max=a[0][0];//���϶�a[0][0]Ϊ���
for(i=0;i<=2;i++)
    for(j=0;j<=3;j++)
		if(a[i][j]>max)
		{max=a[i][j];//���ĳԪ�ش���max��ȡ��max��ԭֵ
		row=i;       //���´�Ԫ�ص���
		colum=j;       //���´�Ԫ�ص���
		}
		printf("max=%d\nrow=%d\ncolum=%d\n",max,row,colum);
		return 0;
}
