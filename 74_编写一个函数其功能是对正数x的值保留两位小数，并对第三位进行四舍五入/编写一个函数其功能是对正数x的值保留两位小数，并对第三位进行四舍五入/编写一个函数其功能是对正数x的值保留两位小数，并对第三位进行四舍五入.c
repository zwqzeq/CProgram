//��дһ������double fun(double x),�书���Ƕ�����x��ֵ������λС�������Ե���λ������������
#include<stdio.h>
#include<stdlib.h>
double fun(double x){
	int three,four;
	double m=0;
		if(x < 0.0|| x == 0.0){
	    printf("���ݴ���,����Ϊ������Ϊ˫����������\n");
		exit(0);
	} 
	if(x > 0.0) {	
		  four = (int)(x*100)%10;
		  three = (int)(x*10)%10;
          if((int)(x*1000)%10>=5){
               four = four+1;
          } 
		  m=((int)x+three*0.1+four*0.01);
	}		  
		  return  m;
}	 
int main(){
	double a=0;
	printf("input num (double): ");
	scanf("%lf",&a);
	printf("������λС������Ϊ%.2lf\n",fun(a));
	return 0;
}

