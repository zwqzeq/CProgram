//9x9�˷���
#include<stdio.h>
int main()
{
	int i,j,n=0;
	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++,n++)
		{if(n%9==0)printf("\n");
			printf("%d*%d=%-3d",i,j,i*j);
		}
		printf("\n");
}
