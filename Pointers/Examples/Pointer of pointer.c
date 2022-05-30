#include<stdio.h>
int main()
{
	int *ptr, **ptr1,val;
	printf("enter any value: ");
	scanf("%d",&val);
	ptr = &val;
	ptr1 = &ptr;
	//fetching the value stored at the var
	printf("The value given by the user =%d\n",val);
	printf("The value given by the user =%d\n",*ptr);
	printf("The value given by the user =%d\n",*(*ptr1));
	//fetching the address
	printf("The address of the variable =%p\n",ptr);
	printf("The address of the 1st pointer =%p\n",ptr1);
	printf("The address of the variable =%p\n",(*ptr1));
	return 0;
	
}
