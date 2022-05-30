#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp1,*fp2;
char ch,file1[30],file2[30];
printf("\nEnter the sourse file name: ");
gets(file1);//another way of giving file name for reading and writing a file..
printf("\nEnter the destination file name: ");
gets(file2);
fp1=fopen(file1,"r");
if(fp1==NULL)
{
printf("\nUnable to open file %s",file1);
exit(0);
}
fp2=fopen(file2,"w");
if(fp2==NULL)
{
printf("\nUnable to open file %s",file2);
exit(0);
}
ch=fgetc(fp1);
while(ch!=EOF)
{
fputc(ch,fp2);
ch=fgetc(fp1);
}
fclose(fp1);
fclose(fp2);
}
