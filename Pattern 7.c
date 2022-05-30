#include<stdio.h>
void main()
{
	int i,j,k,rows;
	printf("Enter the number of rows:\n");
	scanf("%d",&rows);
	for(i = 1;i<=rows;i++)
	{
		for(j= rows;j>i;j--)
		{
			printf(" ");
		}
		for(k = 1;k<=2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i = rows-1;i>=1;i--)
	{
		for(j = 1;j<=rows-i;j++)
		{
			printf(" ");
		}
		for(k = 1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	}
