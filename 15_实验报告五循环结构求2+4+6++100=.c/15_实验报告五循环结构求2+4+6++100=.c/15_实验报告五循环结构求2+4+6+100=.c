#include<stdio.h>   //��ִ�У����ж�
int main()
{int i,sum;
for(i=2,sum=0;i<=50;)
{i=i+2;     //��i=i+2,��s=s+i,���ж�i<=50;
sum=sum+i;
}
printf("sum=%d",sum);
return 0;
}

