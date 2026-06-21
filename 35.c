#include<stdio.h>
int main()
{
   int n,i,f=0;
   printf("Enter a number..");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
      if(n%i==0)
      {
	 f=1;
	 break;
      }
   }
   if(f==1)
      printf("Not a prime number.");
   else
      printf("Prime number.");
   return 0;
}   
