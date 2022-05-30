#include<stdio.h>
  3 int main()
  4 {
  5 int parity=0,num;
  6 printf("enter the number");
  7 scanf("%d",&num);
  8 while(num)//LOOP WILL OPERATE UNTILL NUMBER BECOMES 0..BY RIGHT SHIFTING AGAIN & AGAIN
  9 {
 10 if(num&1)//....MAKE (num & 1)..&..extract 1 bit from 8 bit number..if that 1bit is 1 t    hen ...parity changes...else if that perticular bit is 0 found...then parity did not c    hnges...
 11 parity=!parity;
 12 num=num>>1;//after checking 1st bit...check the next bit to thet bit which is already     checked...in the same 8 bit number...by shifting 1 right ..//
 13 }
 14 if(parity == 1)//1 is representing that parity is odd..//
 15 printf("parity is odd");
 16 else
 17 printf("parity is even");//0 is representing that parity is even..//
 18 return 0;
 19 }

