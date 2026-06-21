#include<stdio.h>
int factorial(int n)
{
   int c;
   if(n==0)
      return 1;
   else
      c=n*factorial(n-1);
   return c;
}
int main()
{
   int f,n;
   printf("Enter a number..");
   scanf("%d",&n);
   f=factorial(n);
   printf("\n Factorial of %d is %d",n,f);
}
