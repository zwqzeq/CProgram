//����һ����������������ѧ�����ݵĽ����ɣ�Ҫ�����������е�����

#include<stdio.h>
struct Student    //�����ṹ������struct Student
{
	int num;//ѧ��
	float score;//����
	struct Student * next;//next��ָ�������ָ��struct Student���͵ı���
};
int main()
{
	struct Student a,b,c,* head,* p;//���������ṹ�����a,b,c��Ϊ������������
	a.num=10101;a.score=89.5;
	b.num=10103;b.score=90;
	c.num=10107;c.score=85;//�Խ��ĳ�Ա��ֵ
	head=&a;//�����a����ʼ��ַ����ͷָ��head
	a.next=&b;//�����b����ʼ��ַ����a����next��Ա
	b.next=&c;//�����c����ʼ��ַ����b����next��Ա
	c.next=NULL;//c����next��Ա�������������ַ
	p=head;//ʹpҲָ��a���
	do
	{
		printf("%ld %5.1f\n",p->num,p->score);//���pָ��Ľ�������
		p=p->next;//ʹpָ����һ���
	}while(p!=NULL);//�����c����p��ֵΪNULL��ѭ����ֹ

	return 0;
}