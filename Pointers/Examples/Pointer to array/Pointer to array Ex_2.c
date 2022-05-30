#include<stdio.h>
int main()
{
	int n=0, arr[n],*ptr = arr,i = 0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for( i =0;i<n; i++)
	{
		scanf("%d\t",&arr[i+1]);
		
	}
	printf("\nPrinting the elements with the help of pointers\n ");
	for(i = 0;i<n;i++)
	{
		printf("%d\n",*ptr);
		ptr++;
	}
		printf("Printing the elements with the help of pointers withpout without using ptr++\n ");
		for(i = 0;i<n;i++)
		{
			printf("\nAddress =%p\t",(ptr+i),"Value =%d\n",*(ptr+i));
		}
		printf("\nPrinting the elements with array name itself\n");
		for(i = 0;i<n;i++)
		{
			printf("%d\t",*(arr+i));
		}
		return 0;
}
