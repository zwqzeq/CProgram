//�Ӽ�������ʮ��ѧ���ɼ������ƽ���ɼ��Լ�����ƽ���ɼ���ѧ������
#include<stdio.h>
int main()
{   float averge;//averge
	float score[10];//score�������ڴ��ʮ��ѧ���ɼ���10��������麬��10��Ԫ��
	float sum=0;
	int i;
	int n=0;//nΪ�ɼ�����ƽ��ֵ��ѧ������
	for(i=0;i<10;i++)//����10��ѧ���ķ���
		{
			scanf("%f",&score[i]);
			sum=sum+score[i];//ʮ��ѧ���ɼ�֮��
	     }
	averge=sum/10;//��ʮ���˳ɼ���ƽ��ֵ
	printf("%f",averge);
	printf("\n");
	for(i=0;i<10;i++)
	{
		if(score[i]>averge)
			n=n+1;//ͳ�Ƹ���ƽ���ɼ���ѧ������
	}
	printf("%d",n);
	return 0;
}
	