#include<stdio.h>
int main()
{
   int a[15],i,n,ch,f=0,k1,k2,c=0;
   printf("Enter the no. of elements in array..");
   scanf("%d",&n);
   printf("Enter the elements..");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("1 for checking the given no. in array \n 2 for checking no. of occurancy of elements..");
   printf("Enter your choice..");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:
      {
	 printf("The element to be checked ..");
	 scanf("%d",&k1);
	 for(i=0;i<n;i++)
	 {
	    if(a[i]==k1)
	    {
	       c++;
	    }
	 }
	 if(c==1)
	    printf("The entered element is present in array..");
	 else
	    printf("Not present.");
	 break;
      }
      case 2:
      {
	 printf("Enter to find occurancy..");
	 scanf("%d",&k2);
	 for(i=0;i<n;i++)
	 {
	    if(a[i]==k2)
	    {
	       f++;
	    }
         }
      printf("The element %d occuring %d times..",k2,f);
      break;
      }
      default:
         printf("Enter a valid choice..");
      }
   return 0;
}   


