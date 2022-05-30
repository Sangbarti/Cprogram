#include<stdio.h>
int Sum_of_digits(int);
int Count_digits(int);
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Sum of digits are %d\n",Sum_of_digits(n));
	printf("Number of digits are %d",Count_digits(n));
}
int Sum_of_digits(int num)//121
						//rem = 1
						//sum = 1
						//1+s(12)
						//rem = 2
						//sum = 3
						//1+3+s(1)
						//rem = 1
						//sum = 4
						//1+3+5+s(0)
{
	int sum= 0, rem;
	if(num>0)
	{
		rem = num%10;
		sum = sum+rem;
		return(sum + Sum_of_digits(num/10));//?
	}
	else
	{
		return sum;
	}

	
}
int Count_digits(int no)
{
	static int count = 0,rem;
	 
	if(no>0)
	{
	rem = no%10;	
	 count++;
	  return (Count_digits(no/10));
	
	}
	else{
		
		return count;
	}

}


/*123/10 count++ 3
12/10  count++ 2
1/10 count++ 1*/

