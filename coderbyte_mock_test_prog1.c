#include <stdio.h> 
void SimpleAdding(int);
int main() { 

   int no;
   printf("Enter the number: \n");
  scanf("%d",&no);
  SimpleAdding(no);
  return 0;
    
}

void SimpleAdding(int num) {
  
  int i,sum=0;
  while(i<=num){
  	sum = sum + i;
  	i++;
  }
	printf("%d",sum);
}
