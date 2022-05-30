#include<stdio.h>
int main ()
{
   int r, s = 5, t = 6;
   int *tp = &t;
   //r = MyFunction(tp,s);
   r = MyFunction(&t,s);
   //r = MyFunction(&s,*tp);
   printf("%d\n",r);
printf("%d\n",tp);
 printf("%d\n",&t);
 printf("%d\n",&s);
 printf("%d\n",*tp);  
   
}

int MyFunction(int *p, int i)
{
   *p = 3;
   i = 4;
   return i;
}

