#include<stdio.h>
int main()
{
	long i;
	FILE *fp1,*fp2;
	fp1 = fopen("E:\\C����\\52_��ʮ�¶��ļ�������������1\\��ʮ�¶��ļ�������������1\\file1.dat","r");
	fp2 = fopen("file2.dat","w");//��file2.dat�ļ���Ȩ��Ϊֻд�����û�д��ļ����½�һ��
	while(!feof(fp1))           //�ж��ļ�λ�ñ���Ƿ��Ѿ�ָ�����ļ�ĩβ
	{
		putchar(getc(fp1));    //���ļ��ж�ȡ�ַ����������̨
	}
	putchar(10);              //����
	//rewind(fp1);//ʹ�ļ�λ�ñ�Ƿ����ļ�ͷ
	fseek(fp1,-1L,2);//�������ļ�λ�ñ�Ǵ�ʱ�Ƿ����ļ�ĩβ�����ļ�λ�ñ�Ǵ��ļ�ĩβ�������1���ֽ�
    i = ftell(fp1);//�ⶨ�ļ�λ�ñ�ǵĵ�ǰλ�ã�����һ����������
	if(i == -1L)//�粻����fp1��ָ����ļ��򷵻�-1L
	{
		printf("error\n");
	}
	printf("�ļ�λ�ñ�ǵ�ǰλ����%ld��\n",i);
	while(!feof(fp1))
	{
		putc(getc(fp1),fp2);//���ļ�������������ַ�
	}
	fclose(fp1);//�ر��ļ�
	fclose(fp2);

	return 0;
}