//����һ��ʵ����ǰ10��������ƽ��ֵ
#include<stdio.h>
int main()
{
    int n=0;
	float aver=0,s=0,i;
	scanf("%f",&i);
	while(1){            //����ѭ��������ѭ�������������ѭ������     
		if(i>0){
		   s=s+i;                   //������֮��
		   printf("%f ",i);
		   n++;                      //ͳ����������
		} 
		if(n==10){                   //��10������ʱ������ѭ��
		   break;
		}
	scanf("%d",&i);
	}
	aver=s/n;//��ƽ��ֵ
	printf("\nǰʮ����������ƽ��ֵΪ��%f\n",aver);
	return 0;
}



