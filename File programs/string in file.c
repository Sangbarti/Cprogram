#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp = fopen("C:\\Files\\program3.txt","w+");//w+ is for overwriting a line in file
	fputs("This is file program for string,",fp);
	fputs("This is my first string program\n",fp);
	fputs("We dont need to use loop\n",fp);
	fputs("Universe\n",fp);
	fputs("this is more easier than fputc\n",fp);//puts = printf and gets = scanf
	fputs("hello\n",fp);
	fputs("hello1\n",fp);
	fprintf(fp,"This is\n");
	fprintf(fp,"abc");
	
	
	fclose(fp);
	return 0;
}
