#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int n,i,f=1;
	fp = fopen("Factorial.txt","w");
	if(fp == NULL)
	{
		printf("Can't open file");
		exit(1);
	}
	printf("Enter the number whose factorial is to be calculated");
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
		f = f*i;
	fprintf(fp,"The factorial of %d is %d",n,f);
	fclose(fp);
}
