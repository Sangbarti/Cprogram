#include<stdio.h>
void Modify(int*,int);
int main()
{
	int *ptr,val;
	printf("Enter any value\n");
	scanf("%d",&val);
	ptr = &val;
	int a =10;
	Modify(ptr,a);
	printf("the value is modified = %d\n",*ptr);
	printf("the a is modified = %d\n",a);
	return 0;
}
void Modify(int *p,int a)
{
	(*p)++;
	a++;
}
