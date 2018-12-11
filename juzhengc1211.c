#include <stdio.h>
int main ()
{	int arr_a[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};//a是5行3列	
	int arr_b[3][3]={1,2,3,4,5,6,7,8,9};//b是3行3列
        int i,j,k;
	int row_a=sizeof(arr_a)/sizeof(arr_a[0]);
	int col_a=sizeof(arr_a[0])/sizeof(arr_a[0][0]);
    	//printf("a行数：%d 列数：%d\n",row_a,col_a);
	int row_b=sizeof(arr_b)/sizeof(arr_b[0]);
	int col_b=sizeof(arr_b[0])/sizeof(arr_b[0][0]);
    	//printf("b行数：%d 列数：%d\n",row_b,col_b);
	int arr_res[5][3]={0};//最终点乘生成的数列是：行数等于A的行数，列数等于B的列数

        for(i = 0; i < 5; i++)//这个是新数列的行
        {

                for(j = 0; j <3; j++)//这个是新数列的列
                {
			int sum=0;	
                        for(k = 0; k < 3; k++)//这个k是A数列的列
                        {
				//printf("arr_b[%d][%d]=%d \t",k,j,arr_b[k][j]);
				//printf("arr_a[%d][%d]=%d \t",i,k,arr_a[i][k]);
				//printf("%5d \n", arr_a[3][k]);
                		sum = sum + arr_a[i][k] * arr_b[k][j];
				//printf("i=%d\t,k=%d,j=%d\t,sum=%d \n",i,k,j,sum);
                        }
    	//printf("i=%d \tj=%d\n",i,j);
                arr_res[i][j] = sum;
                printf("%5d \t", arr_res[i][j]);
		printf("ending \n");
                }
        }

}


