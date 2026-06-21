#include<stdio.h>
int main()
{
  int a=0,b=1,c,i,n;
  printf("Enter the number..");
  scanf("%d",&n);
  scanf("%d%d",a,b);
  for(i=2;i<n;i++)
  {
     c=a+b;
     printf("%d",c);
     a=b;
     b=c;
  }
  return 0;
}  
