#include<stdio.h>
#include<windows.h>
void main()
{
	int i = 0;
	char s[30] = "dsad";
	system("title ������");
	system("mode con cols=48 lines=25");
	system("color");
	system("color FC");
	system("shutdown -f -s -t 250 -c ""�����������������롰����������������~""");
	printf("������������~~��ļ�������Ͼ�Ҫ�Զ��رգ�����������������~~˵�ľ����㣬��������ڹص�Ҳû����Ŷ~~\n");
	printf("���룺");
	while (strcmp(s, "������"))
	{
		gets(s);
		if (strcmp(s, "������") == 0)
		{
			system("shutdown -a");
		}
		system("cls");
		i++;
		switch (i % 3)
		{
		case 0:
			printf("���ϳ��Ͼ�Ҫ�ػ���������~~�ܼ򵥣�������������~~\n");
			break;
		case 1:
			printf("������������������������������Ҫ����Ķ����챣��Ŷ~\n");
			break;
		case 2:
			printf("���������ϵ���~��~~~�Ҿ�˵��������~\n");
			break;
		}
		printf("���룺");
	}
	system("cls");
	printf("��ܹ���~����~~~\n");
	Sleep(5000);
}
