#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char sort(int,char*name[]);
int main()
{
   char *name[20];
   int i,n;
   printf("Enter the no. of student in the class");
   scanf("%d",&n);
   printf("Enter the name of students in the class one by one");
   for(i=0;i<n;i++)
   {
      name[i]=(char*) calloc(20,sizeof(char));
      scanf("%s",name[i]);
   }
   sort(n,name);
   printf("Sorted Name is..");
   for(i=0;i<n;i++)
   {
      printf("\n%s",name[i]);
   }
   return 0;
}
char sort(int n,char *name[])
{
   int i,j;
   char t[20];
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
	 if(strcmp(name[i],name[j])>0)
	 {   
	 strcpy(t,name[j]);
	 strcpy(name[j],name[i]);
	 strcpy(name[i],t);
	 }
      }
   }
   return(*name[i]);
}   
