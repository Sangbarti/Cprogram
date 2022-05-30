#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num;
	FILE *fp;
	if((fp = fopen("Practice2.txt","w"))== NULL)
	{
		printf("Error! opening file");
		exit(1);
	}
	//printf("The number is printed successfully");
	printf("Enter a number");
	scanf("%d",&num);
	printf("The number is printed successfully");
	fprintf(fp,"The number printed is %d",num);
	fclose(fp);
}
