#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[100];
int top = -1;
void push(char x){
	stack[++top]=x;
}
char pop()
{
	if(top == -1)
		return -1;
	else
		return stack[top--];
}
int priority(char x)
{
	if(x == '(')
		return 0;
	if(x == '+'|| x == '-')
		return 1;
	if(x == '*'|| x == '/')
		return 2;
	if(x == '^')
		return 3;
}
void main()
{
	char exp[100],exp2[100];
	int i = 0;
	char *e,x;
	printf("Enter the expression ");
	scanf("%s",exp);
	printf("\n");
	e = strrev(exp);
	while(*e!=0)
	{
		if(isalnum(*e))
			exp2[i++] = *e;
		else if(*e == '(')
			push(*e);
		else if(*e == ')')
			while((x = pop())!='(')
				exp2[i++] = x;
		else
		{
			while(priority(stack[top])>=priority(*e))
				exp2[i++] = pop();
			push(*e);
		}
		e++;
	}
	while(top!=-1)
		exp2[i++] = pop();
	printf("%s",strrev(exp2));
	
}

/*Output:
Enter the expression a*b+c

(¦?¦í8-+*abc
--------------------------------
Process exited after 6.546 seconds with return value 12
Press any key to continue . . .*/
