//��2/1+3/2+5/3+8/5+...ǰʮ��֮�ͣ�������λС������һ�������ǰһ��������ĸ֮�ͣ���һ���ĸ��ǰһ����ӣ�
#include<stdio.h>
int main()
{
	float a=2,b=1,s=0;
int d,i;
	for(i=1;i<=10;i++)
	{s=s+a/b;
	d=a;
	a=a+b;
	b=d;
	}
	printf("%7.2f\n",s);
	return 0;
}