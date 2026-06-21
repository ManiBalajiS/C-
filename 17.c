#include<stdio.h>
union employee
{
   char name[20];
   int empno;
   int bp;
};
int main()
{
   int i,n;
   float ts;
   union employee c[60];
   printf("Enter no. of employees");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("\n Enter the name \t");
      scanf("%s",&c[i].name);
      printf("\n Enter the no \t");
      scanf("%d",&c[i].empno);
      printf("\n Enter the pay \t");
      scanf("%d",&c[i].bp);
   }
   for(i=0;i<n;i++)
   {
     ts=c[i].bp+0.5*c[i].bp+0.05*c[i].bp;
     printf("Employee details are..");
     printf("\n Total \t %f",ts);
   }
}   
   
