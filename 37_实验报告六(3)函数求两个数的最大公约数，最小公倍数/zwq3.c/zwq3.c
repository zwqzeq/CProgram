//�������������������ú���������Լ��������С��������
#include<stdio.h>//����Ԥ����ָ��
int main()//������
{            //�����忪ʼ
	int m,n,a,b;//�������
	int zdgys(int,int);//�������Լ����zdgys������
    int zxgbs(int,int);//������С��������zxgbs������
	printf("������������������\n");
	scanf_s("%d,%d",&m,&n);//�Ӽ�������������
	a=zdgys(m,n);//����zdgys����
	b=zxgbs(m,n);//����zxgbs����
	printf("���Լ��Ϊ��%d\n",a);
	printf("��С������Ϊ��%d\n",b);
	return 0;
}             //����������
int zdgys(int x,int y)//�������Լ����zdgys������
{  
	int r;
    r=x%y;
while(r!=0)
  {   x=y;
      y=r;
      r=x%y;
  }
return y;
}
int zxgbs(int u,int v)//������С��������zxgbs������
{
	return u*v/zdgys(u,v);
}