#include<stdio.h>
int main(
{
	int **ptr,*ptr,val = 10;
	ptr = &val;
	*ptr = &ptr;
	printf("value%d\n",**ptr);
	printf("address%d\n",*ptr);
	return 0;
	
}
