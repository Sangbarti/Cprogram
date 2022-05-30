#include<stdio.h>
void main()
{
	/*int var = (printf("Hello\n"),5);//printf("%s\n","Hello")
	int a = (3,4,12);
	printf("%d",a);//comma operator return the rightmost(because of LIFO mode) operand in the expression and after evaluation of the rest of the operands reject them
	//printf("%d",var);*/
	/*int var ,num;
	num = (var = 15,var+35);
	//printf("%d",num);
	int s, p, c ;
	//char p = printf("Hello");
	 c = scanf("%d %*d %*d",&s, &p);
	//printf("%c",p);
	printf("%d\n",c);*/
	char st[] = "CODING";
 
    printf("While printing ");
    printf(", the value returned by printf() is : %d",printf("%s", st));//comma operator in execution because of
    																	// the word 'CODING' is printed..
 
	return;
}

