//��дһ�����ַ������ȵĺ���������һ���ַ�����������ַ����ĳ���

#include<stdio.h>
#include<stdlib.h>
	void fun(char *p){
		int len=0;
		while(*p!='\0'){
		   len++;
		   p++;
		}
		printf("The length of string is %d\n",len);
	}
int main(){
	char a[20];
	char *p;
	printf("input a string:");
    scanf("%s",a);
	p=a;
	fun(p);
}