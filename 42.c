#include<stdio.h>
int main()
{
   int n,r,c=0,s;
   printf("Enter a number..");
   scanf("%d",&n);
   s=n;
   while(n>0)
   {
      r=n%10;
      c=c*10/r;
      n=n/10;
   }
   if(n==c)
      printf("Palindrome.");
   else
      printf("Not a Palindrome.");
   return 0;
}   
