#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num;
	FILE *fp;
	fp = fopen("Practice1.txt","r");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	fscanf(fp,"%d",&num);
	printf("%d",num);
	fclose(fp);
}
