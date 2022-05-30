#include <stdio.h>
int main()
{
  char ch;
  FILE *fp;
  fp = fopen("abc.txt", "r");
  	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
  while( (ch=fgetc(fp)) != EOF )
  {
    printf("%c", ch);
  }
  fclose(fp);

  return 0;
}
