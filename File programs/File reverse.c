#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp1,*fp2;
char ch,str[100];
int i,j;
fp1 = fopen("Reverse1.txt","r");
fp2 = fopen("Reverse2.txt","w");
if(fp1==NULL)
{
printf("\nUnable to open file");
exit(0);
}
if(fp2==NULL)
{
printf("\nUnable to open file");
exit(0);
}
ch=fgetc(fp1);
while(ch!=EOF)
{
if(ch!='\n')
{
str[i++]=ch;
}
else
{
for(j=i-1;j>=0;j--)
fputc(str[j],fp2);
fputc('\n',fp2);
i=0;
}
ch=fgetc(fp1);
}
fclose(fp1);
fclose(fp2);
}

