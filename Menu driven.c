#include<stdio.h>
#include<math.h>
void reverse();
void pallindrome();
void armstrong();
void perfect();
int main()
{
	int menu,no;
	printf("Following operations are performed in this menu driven program:-Reverse of a number,pallindrome,armstrong and perfect\n");
	printf("1. reverse\n2. pallindrome\n3. armstrong\n4. perfect\n");
	printf("Enter menu number\n");
	scanf("%d",&menu);
	switch (menu)
	{
		case 1:
		{
		reverse();
		break;
		}
		case 2:
		{
		pallindrome();
		break;
		}
		case 3:
		{
		armstrong();
		break;
		}
		case 4:
		{
		perfect();
		break;
		}	
		default:
		{	
		printf("Sorry! your given menu is unavailable");
		}
			
	}
	return 0;
}
void reverse()
{
	
	int rem,rev = 0,no;
	printf("Enter any number");
	scanf("%d",&no);
	while(no!=0)
	{
		rem = no%10;
		rev = rev*10+rem;
		printf("%d\n",rev);
		no = no/10;
	}
		printf("The reverse of a number is %d",rev);
}
void pallindrome()
{
	int rem,rev = 0, no;
	printf("Enter any number");
	scanf("%d",&no);
	int n = no;
	while(no!= 0)
	{
		rem = no%10;
		rev = rev*10+rem;
		no = no/10; 
	}
	if(rev == n)
	{
		printf("Your given number is pallindrome");
	}
	else
	{
		printf("Your given number is not pallindrome");
	}
}
void armstrong()
{
	int count = 0,rem,n,no,sum = 0;
	printf("Enter any number: ");
	scanf("%d",&no);
	n = no;
	while(no!=0)
	{
		rem = no%10;
		no = no/10;	
		count++;	
	}
	no = n;
	while(no>0)
	{
		rem = no%10;
		sum = sum+pow(rem,count);
		no = no/10;
	}
	if(sum == n )
	{
		printf("Your given number is Armstrong");
	}
	else
	{
		printf("Your given number is not Armstrong");
	}
}
void perfect()
{
	int sum = 0,i,no;
	printf("Enter any number: ");
	scanf("%d",&no);
	for(i = 1;i<no;i++)
	{
		if(no%i == 0)
		{
			printf("%d\n",i);
			sum = sum+i;
		}
	}
	if(sum == no)
	{
		printf("Your given number is perfect ");
	}
	else
	{
		printf("Your given number is not perfect");
	}
}
