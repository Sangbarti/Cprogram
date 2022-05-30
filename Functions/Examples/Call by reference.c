#include<stdio.h>
void Swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter two numbers which is to be swapped:\n");
	scanf("%d\t%d",&a,&b);
	printf("The numbers before swapping are %d %d\n",a,b);
	Swap(&a,&b);
	return 0;
}
void Swap(int *n1,int *n2)
{
	int temp = 0;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	printf("The numbers after swapping are %d %d",*n1,*n2);
			
}
