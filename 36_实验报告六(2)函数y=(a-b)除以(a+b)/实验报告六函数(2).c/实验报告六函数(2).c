#include<stdio.h>
int main()
{     int c;
	int a,b;
	printf("��������������");
	scanf_s("%d%d",&a,&b);
	int print(int x,int y);//����abcd����
	c=print(a,b);
	printf("%d",c);
		return 0;
}
int print(int x,int y)
{   
	int z;
	z=(x-y)/(x+y);
	return z;
}