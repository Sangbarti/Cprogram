#include <stdio.h>
  
// function to find factorial of given number
int factorial(int n)
{
    if (n == 0)
	{
    	return 1;
	}
        
    return n * factorial(n - 1);//4*factorial(n-1)
    							//4*3*factorial(n-1)
    							//4*3*2*facttorial(n-1)
    							//4*3*2*1*factorial(0)
    							//4*3*2*1*1 = 120
}
  
int main()
{
    int num;
    printf("Enter the number whose factorial is to be calculated: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
