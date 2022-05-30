#include<stdio.h>
#include<string.h>
#include<ctype.h>//matches the character type to be alphanumeric or not (isalnum function)

char stack[100];
int top= -1;

void push(char x){
	stack[++top] = x;
}

char pop(){
	if(top == -1)
		return -1;
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


int main()
{
	char exp[100];
	char *e, x;
	printf("Enter the Expression : ");
	scanf("%s",exp);
	printf("\n");
	
	while(*e!=0){
		if(isalnum(*e))//operands are printed   a*b+c
																						
		printf("%c",*e);
		else if (*e =='(')
		push(*e);
		else if(*e ==')'){
			while((x = pop())!='(')
			printf("%c",x);
		}
		else{
			while(priority(stack[top])>=priority(*e))
			printf("%c",pop());
			push(*e);
		}
		
		e++;
	}
	while(top != -1){
		printf("%c",pop());
	}return 0;
	}
	
	
	
	
	/*
	
INFIX TO POSTFIX CONVERSION

OPERANDS:- A,B, X, Y, Z......

OPERATORS:- ^,-,+,*,/

Rule : 
1)

priority of operators : - 
^ => highest
* / => next
+ - => low

2)
no two operators of same priority can stay togather in stack column

3)
lowest priority cannot be placed before highest priority

EG:-(A+B/C*(D+E)/F)


SYMBOL          STACK           POSTFIX
(               (                   -
A               (                   A
+               (+                  A
B               (+                  AB
/               (+/                 AB
C               (+/                 ABC
*               (+*                 ABC/
(               (+*(                ABC/
D               (+*(                ABC/D
+               (+*(+               ABC/D
E               (+*(+               ABC/DE
)               (+*                 ABC/DE+    
/               (+/                 ABC/DE+*    
F               (+/                 ABC/DE+*F
)                                   ABC/DE+*F/+ 
	
	

/ PROGRAM OUTPUT	
Enter the Expression : (a+b/c*(d+e)/f)

abc/d+e+*f/+
--------------------------------
Process exited after 62.3 seconds with return value 0
Press any key to continue . . .

for Infix to Prefix
1.reverse the string with strrev()
2.perform postfix same as it is on the reversed string
3.reverse the result with strrev() once more to get the desired output*/
	
	
	
	
