#include<stdio.h>
int main()
{
	int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,10}},i,j;
	int ar[][5] =  {{1,2,3,4,5},{6,7,8,9,10}};
	/*for(i = 0;i<2;i++)
	{
		for(j = 0;j<5;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}*/
	for(i = 0;i<2;i++)
	{
		for(j = 0;j<5;j++)
		{
			printf("%d\t",ar[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
