//����һ�������ռ�������Ǹ���ĵڼ���

#include<stdio.h>

int main(){
	int leap(int year);
	int sumdays(int month,int day);

	int year=0,month=0,day=0,sumday=0;
	printf("input data(year,month,day):");
	scanf("%d,%d,%d",&year,&month,&day);
	printf("%d/%d/%d ",year,month,day);
	sumday = sumdays(month,day)+day;

	if(leap(year)&&month>=3){
	    sumday = sumday+1;              //���Ϊ������������·ݴ��ڵ������£��������29�죬�����溯���ǰ�28���������Ҫ��һ��
	}
	printf("is the %dth day in this year.\n",sumday);
	return 0;
}

//�ж�ƽ������
int leap(int year){
	if(year % 4 == 0 && year % 100 != 0||year % 400==0){
		return 1;
	} else {
	    return 0;
	}	
}

//����������·�֮ǰ���µ�������
int sumdays(int month,int day){
	int i,sumdays=0;
	int month_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//ƽ��12��������
	for(i=1;i<month;i++){
        sumdays = sumdays+month_day[i];
	}
   return sumdays;
}