#include<stdio.h>
int fibo(int n )
{
   if(n<=0)
      return n;
   else	 
      return (fibo(n-1))+(fibo(n-2));
}
int main()
{
   int n,i,f;
   printf("Enter a number to find fibonacci...");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("%d",fibo(i));
   }
   return 0;
}
