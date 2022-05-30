#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isAccepted(char *);
void main()
{
	char str[100];
	printf("Enter the token starting with >");
	scanf("%s",str);
	if(isAccepted(str))
		printf("Accepted ");
	else
		printf("Not Accepted ");
}
int isAccepted(char *e)
{
	int state = 1;
	while(1)
	{
		switch(state)
		{
			case 1:
				{
					ch = nextchar();
					if(ch == '>')
						state 2;
					break;
				}
			case 2:
				{
					ch = nextchar();
					if(ch == '=')
					 	return 1;
					break;
					else
						break;
				}
		
		}
		exit(1);
		
			
	}
}
