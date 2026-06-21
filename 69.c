#include<stdio.h>
#include<stdlib.h>
void main()
{
   FILE *fptr;
   char filename[100];
   char ch;
   printf("Enter the filename to be opened \n");
   scanf("%s",filename);
   fptr=fopen("swaps.c","r");
   if(fptr==NULL)
   {
      printf("Cannot open file\n");
   }
   ch=fgetc(fptr);
   while(ch!=EOF)
   {
      printf("%c",ch);
      ch=fgetc(fptr);
   }
   fclose(fptr);
}
