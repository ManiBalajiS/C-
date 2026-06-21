#include<iostream>
#include<string>
using namespace std;
class str
{
   string s;
   public:
   str()
   {
   }
   str(string x)
   {
      s=x;
   }
   str operator -(char ch)
   {
      int i;
      string res="";
      for(i=0;i<=s.length();i++)
      {
         if(s[i]!=ch)
         {
            res+=s[i];
         }
      }
      str temp;
      temp.s=res;
      return temp;
   }
   void display()
   {
      cout<<" Removed string:"<<s<<endl;
   }
};
int main()
{
   char ch;
   str s1("Electricity");
   cout<<"Enter a character:";
   cin>> ch;
   str s2=s1-ch;
   s2.display();
   return 0;
}
