#include<stdio.h>
int main()
{
  char a[5][5];
  int i,j;
  printf("Enter the sentence...");
  for(i=0; i<5; i++)
  {
      for(j=0; j<5; j++)
      {
	  scanf(" %c", &a[i][j]);
      }
  }
  printf("The Entered string..\n rem@");
  for(i=0; i<5; i++)
  {
      for(j=0; j<5; j++)
      {
	  printf("%c ", a[i][j]);
      }
      printf("\n");
  }
  return 0;
}
