#include<stdio.h>
int main()
{
	float max(float x,float y);//��max����������
	float a,b,c;//�������
	printf("please input two floatger number:\n");//��ʾ�û���������
	scanf("%f,%f",&a,&b);                        //����������
	c=max(a,b);                     //����max����
	printf("max is %f\n",c);
	return 0;
}
float max(float x,float y)
{float z;
z=x>y? x:y;
return z;
}



