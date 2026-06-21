#include<iostream>
using namespace std;
class pale
{
   void process(int s,int r,int c=0 ,int n):
   {
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
	 
   }
   void process(int s,int r,int c=0,int n)
   { 
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
   }
};
int main()
{
   int a;
   cout<<"Enter a number...";
   cin>>n
   process(n);
   process(n);
   return 0;
}
