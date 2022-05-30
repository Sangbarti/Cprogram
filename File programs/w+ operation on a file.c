#include <stdio.h>
int main()
{
  char str[80];
  FILE *fp;
  fp = fopen("program8.txt", "w+");
  while( (fgets(str, 79, fp)) != NULL )
  {
    printf("%s", str);
  }
  fclose(fp);

  return 0;
}

