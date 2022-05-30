#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],*s,no;
	s = str;
	printf("enter the string ");
	scanf("%s",str);
	while(s!=0)
	{
		if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
			no++;
		s++;
	}
	printf("The number of vowels present in the given string is %d",no);
}
