#include<stdio.h>
void main()
{
	int i,j,r;
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	for(i = 1;i<=r;i++)
	{
		for(j = 1;j<=r;j++)
		{
			if(i>1&&i<r)
			{
				if(j == 1||j == r)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
