//���ú����ݹ鷨��n!
#include<stdio.h>
int main()
{
	float a=0;
 float y=0;
	 float fac(float x);//��������
	printf("������һ��������");
	scanf("%f",&a);
	y=fac(a);           //���ú���
	printf("%f!=%f\n",a,y);
	return 0;
}
 float fac(float x)//���庯��
{
	float m=0;
	if(x<0)
		printf("x<0,���ݴ���");
	else if(x==0||x==1)
		m=1;
	else 
		m=x*fac(x-1);
	return (m);
}