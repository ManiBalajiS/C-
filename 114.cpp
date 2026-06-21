#include<stdio.h>
void complex(int ,int ,int ,int );
void main()
{
   int a,b,c,d;
   printf("Enter real and imaginary part of s");
   scanf("%d%d",&a,&c);
   printf("Enter real and imaginary part of r");
   scanf("%d%D",&b,&d);
   complex(a,b,c,d);
}
void complex(int e,int f,int g,int h)
{
   int i,j;
   i=e+f;
   j=g+h;
   printf("The addition %d + i%d",e,f);
}   
