//����10������Ҫ�������������Ԫ�غ͸����ǵڼ�����
#include<stdio.h>
int main()
	{
		int max(int x,int y);//����max����
	    int a[10],m,n,i;
	    printf("enter 10 integer numbers:");
		for(i=0;i<10;i++)//����10������a[0]---a[9]
		   scanf("%d",&a[i]);
		   printf("\n");
		for(i=1,m=a[0],n=0;i<10;i++)
		{
			if(max(m,a[i])>m)//���max��������ֵ����m
			{m=max(m,a[i]);//max��������ֵȡ��mԭֵ
				n=i;
		    }
        }
		printf("the largest number is %d\nit is the %dth number.\n ",m,n+1);
}
int max(int x,int y)//����max����
{
	return (x>y? x:y);//����x��y�е������
}

		
	