//杨辉三角

#include<stdio.h>
#define len 20        

int main()
{  int i;
   int j;
	int a[len][len];                 //定义一个20行20列的数组
	for(i=0;i<=len-1;i++){           
		for(j=0;j<=len-1;j++){        
			if(j==0||j==i){          //第一列和 第i行第i列（行标和列标相等的那个元素）的元素都为1
				a[i][j]=1;
			   printf("%-6d",a[i][j]);//每个元素占6行且左对齐
			}
			if(i>=2&&j!=0&&j!=i&&j<i){ //从第三行（行标为2）开始，且不是第一列，且不是第i行第i列（行标和列标相等的那个元素），且行标大于列标，满足上面条件的元素的值等于上一行中前一列元素加上一行中同列的元素的值
			   a[i][j]=a[i-1][j-1]+a[i-1][j];
			    printf("%-6d",a[i][j]);
			}         
		}
		 printf("\n");//每一行处理完后就换行
	}
 printf("\n");//光标换行
	return 0;
}