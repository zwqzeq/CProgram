//ˮ�ɻ�����ָһ����λ�������λ�������͵��ڸ�������
#include<stdio.h>
int main()
{int a,b,c,i,k=0;//KΪ100��10000��ˮ�ɻ�����
for(i=100;i<1000;i++)
{a=i/100;b=i%100/10;c=i%10;
if(a*a*a+b*b*b+c*c*c==i)
{printf("%5d",i);k++;}
}printf("\nk=%d\n",k);
return 0;
}

