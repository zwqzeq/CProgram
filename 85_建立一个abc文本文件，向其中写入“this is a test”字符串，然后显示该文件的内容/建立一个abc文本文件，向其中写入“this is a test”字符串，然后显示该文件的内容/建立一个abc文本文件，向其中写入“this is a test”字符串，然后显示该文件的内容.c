//����һ��abc�ı��ļ���������д�롰this is a test���ַ�����Ȼ����ʾ���ļ�������

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char string[]="this is a test";
	char buf[20];
	FILE *fp;
	if((fp=fopen("abc","w+")) == NULL){   //'+'��ʾ���ܶ�Ҳ��д��w��ʾ�ļ�������ʱ�ͽ������ļ�
        printf("���ܽ���abc�ļ�\n");
	    exit(1);
	}
	//��Ϊstrlen������õ�����Ч���ȣ��������ַ�����������Ҫ�����ַ���������ʱӦ�ü�1
    fwrite(string,strlen(string)+1,1,fp);//�Զ����Ʒ�ʽ���ļ�д���ݣ�д����ļ�λ�ñ�ǵ����ļ�β
	fseek(fp,0L,0);//���ļ�λ�ñ���ƶ����ļ�ͷ
	fread(buf,strlen(string)+1,1,fp);//���ļ��ж�����
	printf("%s\n",buf);
	fclose(fp);
	return 0;
}