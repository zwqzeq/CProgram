//����һ�������жϼ�λ�������ֱ����ÿһλ���������������λ��

#include<stdio.h>
#define len 20        

int main()
{
	int i=0,place=0,ten_thousand,thousand,hundred,ten,indiv;
	 printf("������һ������0~99999��:");
     scanf("%d",&i);
	 if(i>99999||i<0){
		 printf("�������ݴ���");
		 return;
	 } else if(i>9999){
	    place=5;
	 } else if(i>999){
	    place=4;
	 } else if(i>99){
	    place=3;
	 } else if(i>9){
	    place=2;
	 } else {
	    place=1;
	 }
	 printf("λ��Ϊ��%d\n",place);
	 printf("ÿλ����Ϊ��");
	 ten_thousand = i / 10000;              //�������λ������ten_thousand != 0
	 thousand= (i-10000*ten_thousand)/1000;  //�����4λ������ôten_thousand = i / 10000=0����thousand != 0
     hundred = (i-10000*ten_thousand-1000*thousand)/100;
	 ten = (i-10000*ten_thousand-1000*thousand-hundred*100)/10;
	 indiv =(i-10000*ten_thousand-1000*thousand-hundred*100-ten*10)/1; 
switch(place){
    case 5:
	printf("%d,%d,%d,%d,%d\n",ten_thousand,thousand,hundred,ten,indiv);
	printf("��������Ϊ��%d%d%d%d%d\n",indiv,ten,hundred,thousand,ten_thousand);
	break;
	case 4:
	printf("%d,%d,%d,%d,%d\n",thousand,hundred,ten,indiv);
	printf("��������Ϊ��%d%d%d%d\n",indiv,ten,hundred,thousand);
	break;
	case 3:
	printf("%d,%d,%d\n",hundred,ten,indiv);
	printf("��������Ϊ��%d%d%d\n",indiv,ten,hundred);
	break;
	case 2:
	printf("%d,%d\n",ten,indiv);
	printf("��������Ϊ��%d%d\n",indiv,ten);
	break;
	case 1:
	printf("%d\n",indiv);
	printf("��������Ϊ��%d\n",indiv);
	break;
}
     printf("\n");
	return 0;
}