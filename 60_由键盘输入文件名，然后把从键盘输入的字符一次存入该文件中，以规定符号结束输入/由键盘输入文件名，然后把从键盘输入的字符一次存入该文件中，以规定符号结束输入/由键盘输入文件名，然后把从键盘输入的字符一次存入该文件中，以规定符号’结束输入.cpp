//�ɼ��������ļ�����Ȼ��ѴӼ���������ַ�һ�δ�����ļ��У��ԡ�#����������

#include<stdio.h>
#include<stdlib.h>

int main(){
	char filename[10];
	FILE *fp;
	char ch;
	printf("input filename:");
	gets(filename);
	if((fp = fopen(filename,"w")) == NULL) {
	    printf("can't open %s file!",filename);
		exit(1);//�˳�����
	}
	ch=getchar();//���������ļ�������������Ļس���
	printf("please input a string that you want to save to disk(end with '#')");
  	;//���մӼ�������ĵ�һ���ַ�
	while((ch = getchar()) != '#'){
	   fputc(ch,fp);//�����ַ����浽�ļ���  
	   putchar(ch);//���ַ����������̨
	}
	fclose(fp);//�ر��ļ�
	putchar('\n');
	return 0;
}