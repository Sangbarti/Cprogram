#include<stdio.h>
void salaryhike(int*,int b);
int main()
{
	int salary,bonus;
	printf("Enter the salary and bonus of the employee\n");
	scanf("%d%d",&salary,&bonus);
	salaryhike(&salary,bonus);
	return 0;
}
void salaryhike(int *var, int b)
{
	*var = *var+b;
	printf("the salary hike is =%d\n",*var);
}
