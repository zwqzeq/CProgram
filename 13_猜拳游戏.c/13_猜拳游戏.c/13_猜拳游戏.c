//��ȭ��Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char gamer;  //��Ҳ�ȭ
	int computer; //���Գ�ȭ
	int result;   //�������


	//Ϊ�˱�����һ����Ϸ���˳����򣬿��Խ��������ѭ����
	while(1){
		printf("����һ����ȭ��С��Ϸ����������Ҫ����ȭͷ:\n");
		printf("A:����\nB:ʯͷ\nC:��\nD:������\n");
		scanf("%c%*c",&gamer);
		switch(gamer){
		case 65: //A
		case 97: //a
			gamer=4;
			break;
		case 66: //B
		case 98: //b
			gamer=7;
			break;
		case 68: //D
		case 100: //d
			return 0;

		default:
			printf("���ѡ��Ϊ%cѡ������˳�...\n",gamer);
			getchar();
			system("cls");//����
			return 0;
			break;
		}


		srand((unsigned)time(NULL));//���������
		     computer=rand()%3;//�����������ȡ�࣬�õ����Գ�ȭ
			   result=
				(int)gamer+computer;//gamerΪchar����
			   printf("���Գ���");
			   switch(computer)
			   {
			   case 0:printf("����\n");break;//4  1
			   case 1:printf("ʯͷ\n");break;//7  2
			   case 2:printf("��");break;
			   }
			   if
				   (result==6||result==7||result==11)printf("��Ӯ�ˣ�");
			       else if
					   (result==5||result==9||result==10)printf("����Ӯ�ˣ�");
				     else printf("ƽ��");
                      system("pause>nul&&cls");//��ͣ������
	}
	return 0;
}