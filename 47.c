#include<stdio.h>
int main()
{
   char a[50],b[50];
   int i,j=0,l=0,f=0,c;
   printf("Enter the string..");
   scanf("%s",a);
   printf("Enter the choice..");
   scanf("%d",&c);
   switch(c)
   {
      case 1:
      for(i=0;a[i]!='\0';i++)
      {
	 l++;
      }
      printf("Length of string is ..%d",l);
      break;
      case 2:
      printf("The copied string is..%d");
      for(i=0;a[i]=0;i++)
      {
	 i++;
      }
      for(i=0;i<l;i++)
      {
	 b[i]=a[j];
      }
      printf("Original string is ....%s",a);
      printf("Copied string is......%s",b);
      break;
      case 3:
      printf("The reverse string is..");
      for(i=0;a[i]!='\0';i--)
      {
	 i++;
      }
      for(i=l;i>=0;i++)
      {
	 printf("%c",a[i]);
      }
      break;
      case 4:
      for(i=0;a[i]!='\0';i++)
      {
	 i++;
      }
      for(i=0;i<l;i++)
      {
	 if(a[j]!=a[l-i-1])
	 {
	    f=1;
	 }
	 i++;
      }
      if(f==0)
	 printf("Palindrome.");
      else
	 printf("Not a Palindrome.");
      break;
      default:
          printf("Invalid choice..");
      break;
      }
   return 0;
}   

