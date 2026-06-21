#include<stdio.h>
struct college
{
   char state[20];
   int e;
   int m;
   int md;
   int s;
};
int main()
{
   int i,n,j,max,t,tc[100];
   struct college c[20];
   printf("Enter the no. of states\t");
   scanf("%d",&n);
   printf("\n Enter state and no. of college\t");
   for(i=0;i<n;i++)
   {
      scanf("%s",c[i].state);
      scanf("%d%d%d%d",&c[i].e,&c[i].m,&c[i].md,&c[i].s);
   }
   for(i=0;i<n;i++)
   {
      tc[i]=c[i].e+c[i].md+c[i].m+c[i].s;
      printf("%s has %d College \n",c[i].state,tc[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
	 if(tc[i]>tc[j])
	 {
	    t=tc[i];
	    tc[i]=tc[j];
	    tc[j]=t;
	 }
         max=tc[j];
     }
   }
   printf("Max no. of college is %d is in the state %s",max,c[i].state);
   return 0;
}   
