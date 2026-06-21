#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the 2 numbers..");
  scanf("%d%d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("After swaping a=%d and b=%d ",a,b);
  return 0;
}  
