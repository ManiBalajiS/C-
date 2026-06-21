#include<stdio.h>
int main()
{
   int x,y,*a,*b,t;
   printf("Enter the value of x,y \n");
   scanf("%d%d",&x,&y);
   printf("Before swapping x=%d and b=%d \n",x,y);
   a=&x;
   b=&y;
   t=*b;
   *b=*a;
   *a=t;
   printf("After swapping x=%d and y=%d",x,y);
   return 0;
}   

