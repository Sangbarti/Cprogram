#include <stdio.h>
int main()
{
  char str[]= "Tom and Jerry are Good Friends..";
  FILE *fp;
  fp = fopen("program7.txt", "a");
  fputs(str, fp);
  fclose(fp);

  return 0;
}

