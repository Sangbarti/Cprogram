#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	FILE *fp;
	if((fp = fopen("C:\\Files\\program1.txt","r"))==NULL)
	{
		
		printf("Error! opening file");
		exit(1);
	}
	fscanf(fp,"%d",&num);	
	printf("value of n = %d ",num);
	fclose(fp);
	return 0;
}
