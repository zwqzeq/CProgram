//�ڴ����к� �� �� �� �� ������ɫ�������ɸ���ÿ�δӿڴ����Ⱥ�ȡ��3�����ʵõ����ֲ�ͬ��ɫ����Ŀ���ȡ�������ÿ�����е������


#include<stdio.h>
int main()
{
	enum Color
	{
		red,
		yellow,
		blue,
		white,
		black
	};
	enum Color i,j,k,pri;
	int n,loop;
	n=0;
	for(i = red;i<=black;i++)
		for(j = red;j<=black;j++)
			if(i!=j)
			{
				for(k = red;k<=black;k++)
					if(k!=i && k!=j)
					{
						n=n+1;
						printf("��%-2d�������  ",n);
			            for(loop=1;loop<=3;loop++)
						{
							switch(loop)
							{
								case 1: pri=i;break;
								case 2: pri=j;break;
								case 3: pri=k;break;
								default :break;
							}
							switch(pri)
							{
							   case red: printf("%-15s","red");break;
							   case yellow: printf("%-15s","yellow");break;
						       case blue: printf("%-15s","blue");break;
							   case white: printf("%-15s","white");break;
							   case black: printf("%-15s","black");break;
							   default :break;
							}
						}
						printf("\n");
					}
			}
			printf("\n�ܹ��У�%d�����\n",n);

	return 0;
}