#include <iostream>
#include <string.h>
using namespace std;
class String
{
public:
   char * a;
   char * d;
   String()
   {
      a=" ";
   }
   String(const char *d)
   {
      a=new char[strlen(d)+1];
      strcpy(a,d);
   }
   String(const char *s1,const char *s2)
   {
      a=new char[strlen(s1)+strlen(s2)+1];
      strcpy(a,s1);
      strcat(a,s2);
   }
   char *vowels()
   {
      if(!a)
	 cout<<"No Vowels.";
      int c=0;
      char ch;
      for(int i=0;a[i]!='\0';i++)
      {
	 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u')
	    c++;
      }
      char *vowel=new char[c++];
              int n=0;
      for(int i=0;a[i]!='\0';i++)
      {
	 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u')
	    vowel[n++]=a[i];
      }
      vowel[n]='\0';
      return vowel;
   }
   ~String()
   {
      delete[]a;
   }
};
int main()
{
   String s1;
   String s2("Karnan");
   String s3("Karnan","Mani");
   cout<<"String 1 is..."<<s2.a<<endl;
   char *vowels1=s2.vowels();
   cout<<"Vowels in the words are...."<<vowels1<<endl;
   cout<<"String 2...."s3.a<<endl;
   char *vowels2=s3.vowels();
   cout<<"Vowels in the words are...."<<vowels2<<endl;
   return 0;
}
