#include<stdio.h>
int main()
{
   int a[3][3],b[3][3],c[3][3],p,q,r,s,i,j,k;
   printf("Enter size of A matrix..");
   scanf("%d%d",&p,&r);
   printf("Enter B matrix..");
   scanf("%d%d",&q,&s);
   printf("Enter A matrix..");
   for(i=0;i<p;i++)
   {
      for(j=0;j<r;j++)
      {
	 scanf("%d",&a[i][j]);
      }
   }
   printf("Enter B matrix..");
   for(i=0;i<q;i++)
   {
      for(j=0;j<s;j++)
      {
	 scanf("%d",&b[i][j]);
      }
   }
   for(i=0;i<p;i++)
   {
      for(j=0;j<s;j++)
      {
	 c[i][j]=0;
	 for(k=0;k<p;k++)
	    c[i][j]=c[i][j]+a[i][k]*b[k][j];
      }
   }
   printf("The multiplication of A,B matrix is.. \n");
   for(i=0;i<p;i++)
   {
      for(j=0;j<s;j++)
      {
	 printf("%d\t",c[i][j]);
      }
      printf("\n");
   }
}   
