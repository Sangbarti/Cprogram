#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	FILE *fp;
	char ch;
	char *file_name = "program5.txt";
	char *content = "this text is appended later to the file using c program";
	fp = fopen(file_name,"r");
	printf("\n contents of %s - \n\n",file_name);
	while((ch = fgetc(fp))!= EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	fp = fopen(file_name,"a");
	fprintf(fp,"%s\n",content);
	fclose(fp);
	fp = fopen(file_name,"r");
	printf("\n contents of %s - \n\n",file_name);
		while((ch = fgetc(fp))!= EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}

	
	
