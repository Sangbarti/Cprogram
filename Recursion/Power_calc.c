#include<stdio.h>
int Power(int,int);
void main()
{
	int b,j;
	//printf("Enter the base value and power value of a number to find its exponent ");

	printf("Enter the base value ");
	scanf("%d",&b);
	
	printf("Enter the power value ");
	scanf("%d",&j);
	
	printf("The exponent value of a number is %d ",Power(b,j));
}
int Power(int n,int i)
{
	if(i == 0)
	return 1;
	else
	return(n*Power(n,i-1));
}
