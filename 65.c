#include<stdio.h>
int main()
{
   int m;
   printf("Enter the mark..");
   scanf("%d",&m);
   if((m>=80)&&(m<=100))
     printf("A grade.");
     else if((m>=70)&&(m<=80))
            printf("B grade.");
	    else if((m>=50)&&(m<=70))
	           printf("C grade.");
		   else
		       printf("Fail.");
   return 0;
}   
