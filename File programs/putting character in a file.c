#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;int i;
	char arr[50];
	char str[] = "My name is Sangbarti \n";
	fp = fopen("C:\\Files\\program1.txt","w");
	for(i = 0;str[i]!='\n'; i++)
	{
		fputc(str[i],fp);
	}
	fclose(fp);
	return 0;
}
