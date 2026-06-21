#include<stdio.h>
int main()
{
   char a[57];
   int i,b=0;
   for(i=0;i<=99;i++)
   {
      a[i]=b;
      b=b+1;
   }
   char *q=a;
   for(i=0;i<10;i++)
   {
      *q+=1;
   }
   printf("The result is ....%d",*q);
   return 0;
}
