#include<stdio.h>
void main()
{
	int i,j = 4,k,no = 10;
	for(i = 1;i<=4;i++)
	{
		for(k = j;k>=1;k--)
		{
			if(no == 10)
			{
				printf("0");
			}
			else
			{
				printf("%d",no);
			}
			no--;
		}
		printf("\n");
		j--;
	}
}
