#include<stdio.h>
int main()
{
  int a,b,s,d,m,r,q;
  printf("Enter the 2 numbers..");
  scanf("%d%d",&a,&b);
  s=a+b;
  printf("Sum of 2 numbers is..%d \n",s);
  d=a-b;
  printf("Difference of 2 numbers is..%d \n ",d);
  m=a*b;
  printf("Product of 2 numbers is ..%d \n",m);
  r=a%b;
  printf("Remainder of 2 numbers is..%d \n ",r);
  q=a/b;
  printf("Quotient of 2 numbers is..%d \n",q);
  return 0;
}  
