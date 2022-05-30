#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// Function that returns true if str
// is a valid identifier
// Driver code
int isValid(char, int);
int main()
{
    int i, flag;
	char str[100];
    puts("Enter a String: ");
    gets(str);
    int n = strlen(str);
   puts(n);
    if (!((str[0] >= 'a' && str[0] <= 'z')
          || (str[0] >= 'A' && str[0] <= 'Z')
          || str[0] == '_')){
    flag = 0
    return 0;
	}
        
    for (i = 1; i < n; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
        flag=0;
        return 0;
    }
    
     return 1 ;
    
 
    if (flag==1)
        printf("Valid");
    else
        printf("Invalid");
 
    return 0;
}

int isValid(char str, int n)
{
 
    // If first character is invalid
    
 
    // Traverse the string for the rest of the characters
    
 
    // String is a valid identifier
   
}
