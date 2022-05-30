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
 void pre_in(char *e1)
{
	char x1[100],x2[100],exp2[100];
	while(*e1!=0)
	{
		if(isalnum(*e1))
			push(*e1);
		else
		{
			x1[100] = pop();
			x2[100] = pop();
			strcat(x2,*e1);
			push(strcat(x2,x1));
		}
		e1++;
	}
		while(top!=-1)
			exp2[100] = pop();
		in_post(strrev(exp2));
}
void in_pos(char *e3)
{
	char x;
	while(*e3!=0){
	
		if(isalnum(*e3))//perands are printed   a*b+c
																						
		printf("%c",*e3);
		else if (*e3=='(')
		push(*e3);
		else if(*e3==')'){
			while((x = pop())!='(')
			printf("%c",x);
		}
		else{
			while(priority(stack[top])>=priority(*e3))
			printf("%c",pop());
			push(*e3);
		}
		
		e3++;
	}
		while(top != -1){
			printf("%c",pop());
	
}
void main()
{
	char exp[100];
	printf("Enter the expression in prefix to be converted to postfix ");
	scanf("%s",exp);
	pre_in(strrev(exp));
}
