#include<stdio.h>
void main()
{
	int i,j,k,rows,col;
	printf("Enter the number of rows:\n");
	scanf("%d",&rows);
	for(i = 0;i<rows;i++)
	{
		for(k = 0;k<i;k++)
		{
		printf(" ");
		}
		for(j = rows-1;j>=i;j--)
		{
			printf("*");
		}
	
		printf("\n");
	}
	}
	
