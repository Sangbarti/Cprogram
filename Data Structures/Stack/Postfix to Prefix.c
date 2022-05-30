#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[100];
int top = -1;
void push(char x){
	stack[top++] = x;
}
char pop()
{
	if(top == -1)
		return 0;
	else	
		return stack[top--];
}
int priority(char x){
	if(x == '(')
	return 0;
	if(x=='+'||x=='-')
	return 1;
	if(x=='*'||x=='/')
	return 2;
	if(x=='^')
	return 3;
}
void post_in(char *e){
	char x1[100],x2[100],exp1[100];
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
		exp1[100]=pop();
	in_pre(strrev(exp1));
}
void in_pre(char *e1)
{
	int i = 0;
	char exp2[100],x;
	while(*e1!=0)
	{
		if(isalnum(*e1))
			exp2[i++] = *e1;
		else if(*e1 == '(')
			push(*e1);
		else if(*e1 == ')')
			while((x = pop())!='(')
				exp2[i++] = x;
		else
		{
			while(priority(stack[top])>=priority(*e1))
				exp2[i++] = pop();
			push(*e1);
		}
		e1++;
	}
	while(top!=-1)
		exp2[i++] = pop();
	printf("%s",strrev(exp2));
	
}
void main()
{
	char exp[100];
	printf("Enter the  postfix expression to be converted to prefix ");
	scanf("%s",exp);
	post_in(exp);
}
