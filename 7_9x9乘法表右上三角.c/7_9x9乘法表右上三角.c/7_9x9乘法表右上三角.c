//9x9�˷�������������
#include<stdio.h>
int main()
{int i,j;
for(i=1;i<=9;i++)
{for(j=1;j<=9;j++)
{if(j<i)
printf("       ");
else
printf("%d*%d=%-3d",i,j,i*j);
}
printf("\n");
}
return 0;
}