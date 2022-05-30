#include<stdio.h>
int main()
{
	int n = 0,arr[n],*ptr[n],i=0;
	printf("Enter the no of elements\n");
	scanf("%d\n",&n);
	printf("Enter the elements\n");
	for(i = 0;i<n;i++)
	{
		scanf("%d\t",&arr[i]);
	}
		for(i = 0;i<n;i++)
		{
			ptr[i] = &arr[i];
		}
		printf("Printing the elements with array of pointers\n");
		for(i = 0;i<n;i++)
		{
			printf("%d\t",*ptr[i]);
		}
		return 0;
	

	
}
