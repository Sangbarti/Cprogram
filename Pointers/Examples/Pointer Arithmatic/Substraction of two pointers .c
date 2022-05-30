#include <stdio.h>
int main()
{
	int x,n,*ptr1,*ptr2;
	printf("Enter a number");
	scanf("%d",&n);
	ptr1 = &n;
	ptr2 = &n;
	ptr2 = ptr2+4;
	x = ptr2 - ptr1;
	printf("substraction of two pointers is = %d\n",x);
	return 0;
}
