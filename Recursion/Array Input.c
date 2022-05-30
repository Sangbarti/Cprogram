#include<stdio.h>
int ArrayInput(int,int);
void main()
{
	int i ,n,k,temp[] = {0}, arr[] = {0};
	printf("Enter the size:  ");
	scanf("%d",&n);
	
	printf("Enter the array elements: ");
	temp[n] = ArrayInput(i,n);
	printf("The elements given are as follows: ", ArrayInput(i,n));
	for(k= 0; k<n; k++)
	{
		printf("%d ",temp[k]);
		
	}


 int ArrayInput(int j,int size)
{
	int arr[size];
	scanf("%d ",&arr[j]);
	if(j<size)
	{
		return (ArrayInput(j+1,size));
	}
	//else
	//break;
	/*printf("The elements given are as follows");
	for(j = 0;j<size;j++)
	{
		printf("%d ",arr[j]);
		
	}*/
}





