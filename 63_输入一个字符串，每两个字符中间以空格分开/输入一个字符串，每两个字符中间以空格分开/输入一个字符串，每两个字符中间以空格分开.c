//����һ���ַ�����ÿ�����ַ��м��Կո�ֿ�

#include<stdio.h>
#include<string.h>
#define len 20       

int main()
{  void insert(char str1[],char str2[]);
   char str1[80],str2[80];
   printf("please input  string:");
   scanf("%s",str1);
   insert(str1,str2);
   return 0;
}
void insert(char str1[],char str2[]){
	int i;
	for(i=0;i<strlen(str1);i++){ //i=4ʱ����ѭ��
		str2[2*i]=str1[i];
		if(i==0){
           str2[1]=' ';
		}
		if(i>0){
		str2[2 * i-1]=' ';//��Ϊi=0ʱ��str2[-1]����Ҫ��
		}
	}
    str2[2*i-1]='\0';         //�ַ���������־
	printf("%s\n",str2);//������ַ�����ʽ���str2��str2�д�ŵı������ַ��������ַ����������ַ���������־��\0��
}