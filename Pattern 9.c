#include<stdio.h>
void main()
{
	int i,j,no = 1;
	for(i = 4;i>=1;i--)
	{
		for(j= 1;j<=i;j++)
		{
			if(no == 10)
			{
				printf("0");
			}
			else
			{
				printf("%d",no);}
				no++;	
		}
		printf("\n");
	}
	
}
