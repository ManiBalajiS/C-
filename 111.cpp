#include<stdio.h>
int main()
{
   int n,r,c=0,s;
   printf("Enter a number..");
   scanf("%d",&n);
   s=c;
   while(n>0)
   {
      r=n%10;
      c=c+r*r*r;
      n=n/10;
   }
   if(s=c)
      printf("Amstrong.");
   else
      printf("Not a Amstrong.");
   return 0;
}   
