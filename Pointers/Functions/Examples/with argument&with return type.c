#include<stdio.h>
int add(int,int);

int add(int n1,int n2)
{
	int sum = 0;
	sum = n1+n2;
	return sum;
}
void main()
{
	int a;int b;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	int result = add(a,b);
	printf("The sumation of two numbers are %d",result);
	return 0;
}

