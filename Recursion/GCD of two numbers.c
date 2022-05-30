#include<stdio.h>
int GCD(int,int);
void main()
{
	int n1,n2;
	printf("Enter any two numbers whose gcd you want to find: ");
	scanf("%d %d",&n1,&n2);
	printf("The gcd of the numbers %d and %d is %d",n1, n2, GCD(n1,n2));
}
int GCD(int n1,int n2)
{
	if(n2!= 0)
	return GCD(n2, n1%n2);
	else{
		return n1;
	}
}
