#include<stdio.h>
int main()
{
	int arr[] = {1, 2,4,6,8,9},i;
	int arr1[5] = {1,4,7,8,9};
	int arr2[] = {0};
	int arr3[8] = {2,4,5,6,7};
	int arr4[] = {[3] = 4,[4] = 5,[7] = 9};
	int arr5[] = {1,2,[4] = 8,[6] = 7,8,9};
	int arr6[] = {1,2,[1] = 6,7,8};
	//printf("arr is printed as %d\n",arr);
	printf("arr: ");
	for(i = 0;i<6;i++)
	{ 
		printf("%d\t",arr[i]);	
	}
	printf("\n");
	
	printf("arr1: ");
	for(i = 0;i<5;i++)
	{ 
		printf("%d\t",arr1[i]);	
	}
	return 0;
}
