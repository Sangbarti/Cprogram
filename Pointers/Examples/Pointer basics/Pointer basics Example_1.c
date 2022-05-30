#include<stdio.h>
int main()
{
	int a,b,c,*p1,*p2,p3,*p4;
	printf("Enter the three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	p1 = &a;
	p2 = &b;
	p4 = &c;
	printf("The address of a is = %p\n",p1);
	printf("The address of b is = %p\n",p2);
	 p3 = *p1 + *p2;
	*p4 =  *p1 + *p2;
	int d = *p4;
	printf("The address of c is  =  %p\n",p4);
	printf("*p4 =%d\n",*p4);
	printf("d =%d\n",d);
	printf("The sumation of two numbers is: %d",p3);
	return 0;
	
}
