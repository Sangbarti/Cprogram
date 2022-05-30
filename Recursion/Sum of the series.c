#include<stdio.h>
void main()
{
	int n;
	printf("Enter the range for 1st numbers ");
	scanf("%d",&n);
	printf("The sum of the given range is %d", Sum(n));
}
int Sum(int r)
{
	if(r>0)//if(r>=0)is taken the output coming is one less than the actual one.why?? 
	return r + Sum(r-1);
}
