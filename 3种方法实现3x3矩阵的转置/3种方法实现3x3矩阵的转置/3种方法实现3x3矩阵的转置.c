//3�ַ���ʵ��3x3�����ת��

#include<stdio.h>
#include<stdlib.h>

//ָ�����
void move1(int *pointer1){
	int i,j,t;
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
			t=*(pointer1 + 3*i+j);                     //��ȷ
			*(pointer1 +3*i+j)=*(pointer1 +3*j+i);//��ȷ
            *(pointer1+3*j+i)=t;//��ȷ
		}
	}

}

//��������
void move2(int *pointer2){
    int i,j,t;
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
	     t= *(*(&pointer2+i)+j);//����   ���ʣ�Ϊʲô
		 *(*(&pointer2+i)+j) = *(*(&pointer2+j)+i);//����
		 *(*(&pointer2+j)+i)=t;//����

		}
	}
}

//ָ������Ԫ�ص������ָ�����
void move3(int (*pointer3)[3]){
    int i,j,t;
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
         t=*(*(pointer3+i)+j);
		 *(*(pointer3+i)+j)=*(*(pointer3+j)+i);
		 *(*(pointer3+j)+i)=t;
		}
	}
}
//�±귨
void move4(int x[][3]){
   int i,j,temp;
   printf("ԭ3�׾���Ϊ��\n");
   for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	       printf("%d ",x[i][j]);
	   }
	   printf("\n");//ÿһ��Ԫ�������󣬾��������
   }

   for(i=0;i<3;i++){
	   for(j=i;j<3;j++){  //����j��i��ʼ�������0��ʼ�����һ���н���������Ԫ�أ��ڵڶ������ֻ�����ԭֵ��
	       temp=x[i][j];
		   x[i][j]= x[j][i];
		   x[j][i]=temp;
	   }
   }
   printf("�������3�׾���Ϊ��\n");
   for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	       printf("%d ",x[i][j]);
	   }
	   printf("\n");//ÿһ��Ԫ�������󣬾��������
   }
   printf("\n");
}
void main(){
    int i;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int *p1;
	int *p2;
	int (*p3)[3];
	
//	p1=&a[0][0];
//	move1(p1);

//	p2=&a[0][0];
//	move(p2);

//	p3=a;
//	move3(p3);

	move4(a);
	
	for(i=0;i<3;i++){
	    printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
	}
}
