//��N���ṹ��������ں�ѧ��ѧ�ţ����������ſγ̳ɼ���Ҫ�����ƽ���ɼ���ߵ�ѧ����Ϣ������ѧ���������ſγ̳ɼ���ƽ���ɼ���


#include<stdio.h>
#define N 3//ѧ������Ϊ3
struct Student//�ṹ������
{
	int num;          //ѧ��
	char name[20];    //����
	float score[3];       //�ɼ�
	float aver;       //���ſγ̵�ƽ���ɼ�
};
int main()
{
    void input(struct Student stu[]);//��������
	struct Student max(struct Student stu[]);//��������
	void print(struct Student stud);//��������
	struct Student stu[N],*p;//����ṹ�����͵������ָ��

	p=stu;//��������׵�ַ����ָ�����p
	input(p);//����input����
	print(max(p));//����print��������max�����ķ���ֵ��ʵ��

	return 0;
}
void input(struct Student stu[])//����input���������ã��������ݺ������ſγɼ���ƽ��ֵ
{
	int i;
	printf("�������ѧ������Ϣ��ѧ�ţ����������ſγɼ���\n");
	for(i=0;i<N;i++)
	{
		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);//��������
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;//��ƽ��ֵ
	}
}
struct Student max(struct Student stu[])//����max���������ã��ҳ�ƽ���ɼ���ߵ�ѧ�������
{
	int i,m;//m����������ųɼ���ߵ�ѧ���������е����
	m=0;//�����һ����ƽ���ɼ���ߣ����������е����Ϊ0����Ϊ������Ŵ��㿪ʼ��
	for(i=0;i<N;i++)//�ô���̨���ҳ��ɼ���ߵ�ѧ�������
	{
		if(stu[i].aver>stu[m].aver)//���ĳ��ѧ���ĳɼ�����m���ѧ���ĳɼ��Ͱ����ѧ������Ÿ���m��Ҳ����˵m��Զ�ǳɼ���ߵ��Ǹ�ѧ�������
			m=i;
		return stu[m];//���ذ���������Ϣ�Ľṹ��Ԫ��
	}
}
void print(struct Student stud)
{
	printf("\n�ɼ���ߵ�ѧ���ǣ�\n");
	printf("ѧ�ţ�%d\n������%s\n���ſγɼ���%5.1f,%5.1f,%5.1f\nƽ���ɼ���%6.2f\n",
		stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}