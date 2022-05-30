#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[100];
int top = -1;
void push(char x)
{
	stack[++top] = x;
}
char pop()
{
	if(top == -1)
		return -1;
	else
		return stack[top--];
}
int main()
{
	char exp[100],*e,x1[100],x2[100];
	printf("Enter the expression ");
	scanf("%s",exp);
	printf("\n");
	while(*e!=0)
	{
		if(isalnum(*e))
			push(*e);
		else
		{
			x1[100] = pop();
			x2[100] = pop();
			strcat(x2,*e);
			push(strcat(x2,x1));
		}
		e++;
	}
	while(top!=-1)
		printf("%s",pop());
	return 0;
}

