#include<stdio.h>
#include<string.h>
int main()
{
   int l,c;
   char a[50],b[50];
   printf("Enter the string..");
   scanf("%s",&a);
   printf("Enter the choice..");
   scanf("%d",&c);
   switch(c)
   {
      case 1:
	 l=strlen(a);
	 printf("Length is..%d",l);
	 break;
      case 2:
          strcpy(b,a);
	  printf("Original is..%s",a);
	  printf("Copied is..%s",b);
      case 3:
	  printf("Enter string 2..");
	  scanf("%s",b);
	  strcat(a,b);
	  printf("Concatenated is..%s",a);
	  break;
      case 4:
	  printf("Enter string 2..");
	  scanf("%s",b);
	  if (strcmp(a,b)==0)
	     printf("String are equal.");
	  else
	     printf("String is not equal.");
	  break;

      default:
	    printf("Enter Valid choice..");
	    break;
   }
   return 0;
}   
