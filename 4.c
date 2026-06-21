#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   char s[10],r[10];
   printf("Enter a word..");
   scanf("%s",s);
   strcpy(r,s);
   printf("The word is ....%s \n",r);
   int x=strlen(r);
   int i;
   for(i=0;i<x;i++)
   {
      if(r[i]=='a'||r[i]=='e'||r[i]=='o'||r[i]=='i'||r[i]=='u'||r[i]=='A'||r[i]=='E'||r[i]=='I'||r[i]=='O'||r[i]=='U')
      {
	 printf("%c",r[i]);
      }
    }
}
