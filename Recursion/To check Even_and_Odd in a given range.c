#include<stdio.h>
int even(int, int);
int odd(int, int);
void main()
{
	int start, end;
	printf("Enter the starting range to find even and odd number present: ");
	scanf("%d",&start);
	
		printf("Enter the endiing range to find even and odd number present: ");
	scanf("%d",&end);
	
	printf("The even numbers present in a given range are:\n  ");
	even(start, end);
	printf("\nThe odd numbers present in a given range are:\n  ");
	odd(start, end);
}
int even(int lower, int upper)
{
	if(upper<lower)
	{
		return 0;
	}
	
	upper%2 == 0?even(lower,upper-2):even(lower,upper-1);
	if(upper%2 == 0){
			printf("%d ",upper);//The elements are checked with respect  to their positions in stack
	}	
}
int odd(int lower, int upper)
{
	if(upper<lower)
	{
		return 0;
	}
	
	upper%2 == 1?odd(lower,upper-2):odd(lower,upper-1);
	if(upper%2 == 1){
			printf("%d ",upper);
	}	
}
/*output

Enter the starting range to find even and odd number present: 1
Enter the endiing range to find even and odd number present: 100
The even numbers present in a given range are:
  2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 5
6 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100
The odd numbers present in a given range are:
  1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55
 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99
--------------------------------
Process exited after 3.111 seconds with return value 0
Press any key to continue . . .


*/		
	
