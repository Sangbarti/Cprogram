#include<stdio.h>
int main()
{
	int a,*p1,*p2;
	printf("Enter a number:");
	scanf("%d",&a);
	p1 = &a;
	p2 = &p1;
	printf("The address of the number is %d\n",*p2);
	printf("The address of the number is %d\n",p1);
	printf("address of a is %d\n",&a);
	return 0;
	
}
