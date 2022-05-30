#include<stdio.h>
#include<string.h>
#include<ctype.h>
int top = -1;
char stack[100];
void push(char x)
{
	stack[++top] = x;
}
int pop()
{
	if(top == -1)
		return 0;
	else
		return stack[top--];
}
void main()
{
	char x[100],*e;
	int a,b,c,eve;
	printf("Enter the expression to be evaluated in postfix ");
	scanf("%s",x);
	while(*e!=0)
	{
		if(isdigit(*e))
			push(*e);
		else
		{
			a = pop();
			b = pop();
			switch(*e){
				case '+': c = b+a;
						push(c);
						break;
						
				case '-': c = b-a;
						push(c);
						break;
						
				case '*': c = b*a;
						push(c);
						break;
						
				case'/': c = b/a;
						push(c);
						break;
						
			}
		}
		e++;
	}
	while(top!=-1)
		eve = pop();
	printf("The evaluation of the given postfix expression is %d",eve);
}
