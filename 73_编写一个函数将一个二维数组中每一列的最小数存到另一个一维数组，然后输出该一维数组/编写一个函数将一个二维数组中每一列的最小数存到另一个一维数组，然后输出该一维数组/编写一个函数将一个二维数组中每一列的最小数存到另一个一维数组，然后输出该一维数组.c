//��дһ��������һ����ά������ÿһ�е���С���浽��һ��һά���飬Ȼ�������һά����

#include<stdio.h>
#include<stdlib.h>
void fun(int x[][4],int y[]){
  int i,j,min,n=-1;
  for(j=0;j<=3;j++){
	  min = x[0][j];
	  for(i=0;i<=2;i++){
		  if(x[i][j]<min){
		      min = x[i][j];
		  } 
	  }
	  n=n+1;
	  y[n]=min;
  }
}

void main(){
	int a[3][4]={1,9,0,7,6,2,5,5,8,10,3,4};
	int b[4];
	int i;
	fun(a,b);
	for(i=0;i<4;i++){
	printf("%d ",b[i]);
	}
}