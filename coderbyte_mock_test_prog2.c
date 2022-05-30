#include <stdio.h>
void CheckNums(int,int);
int main() { 
   int no1, no2; 
   printf("Enter the 1st number: ");
   scanf("%d",&no1);
   printf("Enter the 2nd number: "); 
   scanf("%d",&no2);
  CheckNums(no1, no2);
  return 0;    
}
void CheckNums(int num1 ,int num2) {
  int temp;
  temp = num2-num1;
  if(temp>0){
  	printf("TRUE");
  }else if(temp<0){
  	printf("FALSE");
  }else{
  	printf("EQUAL");
  }

}
