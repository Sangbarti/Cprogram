#include<stdio.h>
int main()
{
	int n,*ptr1,*ptr2;
	printf("Enter a number\n");
	scanf("%d",&n);
	ptr1 = &n;
	ptr2 = &n;
	printf("Pointer ptr1 before increment %p\n",ptr1);
	ptr1++;
	printf("Pointer ptr1 after increment %p\n",ptr1);
	printf("Pointer ptr1 before decrement %p\n",ptr1);
	ptr1--;
	printf("Pointer ptr1 after decrement %p\n",ptr1);
	printf("Pointer ptr2 before addition %p\n",ptr2);
	ptr2 = ptr2 + 4;
	printf("Pointer ptr2 after addition %p\n",ptr2);
	printf("Pointer ptr2 before substraction %p\n",ptr2);
	ptr2 = ptr2 - 3;
	printf("Pointer ptr2 after substraction %p\n",ptr2);
	return 0;
}
