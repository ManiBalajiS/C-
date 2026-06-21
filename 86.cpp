#include<iostream>
using namespace std;
class Time
{
   int h,m,s;
   public:
   Time(int x,int y,int z)
   {
      h=x;
      m=y;
      s=z;
   }
   void operator++(int)
   {
      ++s;
      m=m+(s/60);
      s=s%60;
      if(m>=60)
      {
         h=h+(m/60);
         m=m%60;
      }
   }
   void operator++()
   {
      s++;
      m=m+(s/60);
      s=s%60;
      if(m>=60)
      {
         h=h+(m/60);
         m=m%60;
      }
   }
   void operator--(int)
   {
      --s;
      m=m+(s/60);
      s=s%60;
      if(m>=60)
      {
         h=h+(m/60);
         m=m%60;
      }
   }
   void operator--()
   {
      s--;
      m=m+(s/60);
      s=s%60;
      if(m>=60)
      {
         h=h+(m/60);
         m=m%60;
      }
   }
   void display()
   {
      cout<<h<<" hours "<<m<<" minutes "<<s<<" seconds "<< endl;
   }
};
int main()
{
   Time a(5,60,74);
   Time b(4,35,5);
   Time c(8,49,36);
   Time d(7,9,68);
   ++a;
   b++;
   --c;
   d--;
   a.display();
   b.display();
   c.display();
   d.display();
   return 0;

}
