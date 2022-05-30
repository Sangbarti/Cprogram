#include<stdio.h>
int main()
{
	int arr[100],*p1,value,i;
	printf("Enter the number of elements:\n");
	scanf("%d",&value);
	p1 = arr;
	printf("Enter the elements:\n");
	for(i = 0;i<value;i++)
	{
		scanf("%d",p1);
		p1++;
	}
	p1 = arr;
	printf("The numbers are displayed as\n");
	for(i = 0;i<value;i++)
	{
		printf("%d\t",*p1);
		p1++;
	}
	return 0;
	
}
