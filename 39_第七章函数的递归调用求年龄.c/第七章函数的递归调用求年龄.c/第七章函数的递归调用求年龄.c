//�����ѧ����һ���ʵ����ѧ�������ꣿ
//���ȵ��ĸ������꣬���ĸ��ȵ����������꣬
//�������ȵڶ��������꣬�ڶ����ȵ�һ�������꣬��һ��ѧ��10�ꡣ 
#include<stdio.h>
int main()
{
	int age(int n);
	printf("NO.5,age:%d\n",age(5));
	return 0;
}
int age(int n)
{
	int c;
	if(n==1)
		c=10;
	else
		c=age(n-1)+2;
	return(c);
}