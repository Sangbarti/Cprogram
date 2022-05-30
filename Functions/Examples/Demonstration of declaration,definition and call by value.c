#include<stdio.h>
//int add(int,int);

char add(int n1,int n2)
{
	int sum = 0;
	sum = n1+n2;
	printf("The sumation of two numbers are %d",sum);
	return 0;
}
int main()
{
	int a;int b;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	add(a,b);
	return 0;
}
