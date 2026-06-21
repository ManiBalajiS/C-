#include<stdio.h>
int main()
{
   int i,j,n,a[10],c;
   printf("Enter the no. of elements..");
   scanf("%d",&n);
   printf("Enter the elements 1 by 1..");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
	 if(a[i]>a[j])
	 {
	    c=a[i];
	    a[i]=a[j];
	    a[j]=c;
	 }
      }
   }
   printf("The sorted numbers are..");
   for(i=0;i<n;i++)
   {
      printf("%d",a[i]);
      printf("\n");
   }
}   
