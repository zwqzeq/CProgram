//�ú������������
#include<stdio.h>
int main()
{
void print_star();//����print_star����
void print_abcd();//����print_abcd����
print_star();     //����print_star����
print_abcd();     //����print_abcd����
print_star();     //����print_star����
printf("\n");     //���õĺ�������������Ϻ󣬽�����Ƶ���һ��
return 0;         //����
}
void print_star()//���� print_star����
{
	printf("* * * * * *");//���������һ���Ǻ�
	printf("\n");         //����Ǻź�����ž��������
}
void print_abcd()       
{   int i;
	for(i=1;i<=4;i++)
	{
		printf("*");
	    printf("         *");
		printf("\n");
	}
}
