//��дint fac(int x)����x!,��������������n,m��ֵͨ������fac��������c(m,n)
#include<stdio.h>
int main()
{
	int fac(int x);//��������
	int m,n,a,b;
	scanf("%d%d",&n,&m);
	a=n-m;
	b=fac(n)/(fac(m)*fac(a));//c(m,n)=n!/((m!)*(n-m)!)
	printf("���Ϊ%d",b);
	printf("\n");
	return 0;
}
int fac(int x)
{
	int s=1,i;
	for(i=x;i>=1;i--)
		s=s*i;
	return s;
}

