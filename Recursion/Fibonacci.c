#include<stdio.h>
/*int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
 
int main ()
{
  int n;
  printf("Enter the range ");
  scanf("%d",&n);
  printf("%d", fib(n));
  getchar();
  return 0;
}*/
#include<stdio.h>
int fibonacci(int);
int main()
{
int n, m= 0, i;
printf("Enter Total terms: ");
scanf("%d", &n);
printf("Fibonacci series terms are: ");
for(i = 1; i <= n; i++)
{
printf("%d ", fibonacci(m));
m++;
}
return 0;
}
int fibonacci(int n)
{
if(n == 0 || n == 1)
return n;
else
return(fibonacci(n-1) + fibonacci(n-2));/*n = 0,m = 0
										//print 0
										n = 1.m=1
										print 1
										n = 2,m = 2
										fibonacci(1)+fibo(0)
										1+0
										print 1
										n = 3,m = 3
										f(2)+f(1)
										f(1) +1
										1+1
										print 2
										n = 4,m = 4
										f(3)+f(2)
										f(2)+f(1)+f(1)
										f(1)+1+1
										1+1+1
										print 3*/
										
										
										 //(4) 2+3 = 5
										 //(5) 4+ 3+1 = 8  
																				
										
}
