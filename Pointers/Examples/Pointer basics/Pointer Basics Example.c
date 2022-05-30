#include<stdio.h>
int main(){

int test_int = 1000000;
int ffff = 45;
int *ptr ,*ptr1;
ptr = &ffff;
ptr = &test_int;
ptr1 = ptr;//here both are holding address
*ptr = 18;
ffff = *ptr;//ffff and *ptr both are values
int a = *ptr;//here *ptr and a both are operating on values
printf("*ptr	= %d\n",*ptr);      //Outputs: 9
printf("a = %d\n",a);
printf("test_int= %d\n",test_int);  //Outputs: 9 too why-> because the value is changed at the address hold by the pointer
printf("&ptr	= %p\n",&ptr);      //Outputs: the location of ptr - its address
printf("ptr		= %p\n",ptr);       //Outputs: the location of test_int
printf("ptr1 = %p\n",ptr1);
printf("*ptr1 =%d\n",*ptr1);
printf("&test_int=%p\n",&test_int); //Outputs: the location of test_int too
printf("ffff= %d\n",ffff);
return 0;
}


/*
*ptr    = 9
test_int= 9
&ptr    = 22FE40
ptr     = 22FE4C
&test_int=22FE4C
*/

    /*
	ptr is the pointer itself.
    *ptr is the value it points to.
    &ptr is the address of the pointer.
    &a is the memory location where a is stored.
    a is the memory location where *a is stored.*/





