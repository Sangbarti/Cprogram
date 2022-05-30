
#include <stdio.h>
int main()
{
  char str[]= "Tom and Jerry are Good Friends..";
  int i=0;
  FILE *fp;
  fp = fopen("abc.txt", "a");
  while( str[i] != '\0' )
  {
    fputc(str[i], fp);
    i++;
  }
  fclose(fp);

  return 0;
}
