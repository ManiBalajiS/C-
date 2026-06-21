#include<stdio.h>
void swap(int ,int );
int main()
{
   int a=10,b=20;
   printf("Before swapping a=%d,b=%d ",a,b);
   swap(a,b);
   printf("After swapping a=%d,b=%d ",a,b);
}
void swap(int a,int b)
{ 
   int c;
   c = a;
   a = b;
   b = c;
   printf("After swapping a=%d,b=%d\n",a,b);
}   
