//10����ί�����ִ�֣�ȥ��һ����߷֣�һ����ͷ֣���ƽ����

#include<stdio.h>
#include<stdlib.h>

int main(){
    int score[10];
	int i,max,min,temp,sum=0;
	float ave=0.0f;
	for(i=0;i<10;i++){
	    scanf("%d",&score[i]);
		sum=sum + score[i];
	}
	max= score[0];
	min= score[0];
	for(i=1;i<10;i++){
		if(score[i]>max){ max = score[i];}
		if(score[i]<min){min = score[i];}
	}
	ave = (sum - max -min)/8.0;
	printf("ȥ��һ����߷�%d,ȥ��һ����ͷ�%d\n���յõ�ƽ����%f\n",max,min,ave);
}