#include<stdio.h>
int main()
{
  int a=10,b;
  printf("a=%d \n",a);
  a++;
  printf("After a++;a=%d \n",a);
  ++a;
  printf("After ++a;a=%d \n",a);
  b=a++;
  printf("After b=a++;b=%d,a=%d \n",b,a);
  a--;
  printf("After a--;a=%d \n",a);
  --a;
  printf("After --a;a=%d \n",a);
  b=a--;
  printf("After b=a--,b=%d,a=%d \n",b,a);
  b=--a;
  printf("After b=--a,b=%d,a=%d \n",b,a);
  return 0;
}  
