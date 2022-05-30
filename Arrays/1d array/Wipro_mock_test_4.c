/*1.input an age
2.input sizes of the candles
3.find the biggest candle size 
4.count the maximum size from the list of candle sizes*/
#include<stdio.h>
void main()
{
	int age,i,count = 0,max = 0;
	printf("Enter the age: ");
	scanf("%d",&age);
	int size[age];//to avoid garbage values,arrray is declared here
	printf("Enter the candle sizes: ");
	for(i = 1;i<=age;i++)
	{
		scanf("%d",&size[i]);
		if(max<size[i])
		max = size[i];
	}
	for(i = 1;i<=age;i++)
	
		if(size[i] == max)
		count++;
	
	printf("Number of bigger candles are: %d",count);
		
}
