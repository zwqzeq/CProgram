 //���ú���������֮��
#include<stdio.h>
int main()
{  
	float add(float x,float y);//����add����
	float a,b,c;
	printf("please enter a and b:");
	scanf("%f,%f",&a,&b);
	c=add(a,b); //����add����
	printf("sum is %f\n",c);
	return 0;
}
float add(float x,float y)//����add����
{
	float z;
	z=x+y;
	return (z);
}