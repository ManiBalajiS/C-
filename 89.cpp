#include<iostream>
using namespace std;

class one
{
   int x;
   public:
   friend class two;
   void getdata()
      {
         cout<<" Enter the value:";
         cin>> x;
      }
};
class two
{
   int y;
   public:
   void input()
   {
      cout<< " Enter the value2:";
      cin>> y;
   }
   void average(one z)
   {
      int avg;
      avg=(z.x+y)/2;
      cout<< " The average is:"<< avg<< endl;
      if(z.x>y)
      {
         cout<<" The max is.."<< z.x<< endl;
      }
      else
      {
         cout<<" The max is.."<< y<< endl;
      }
   }
};
int main()
{
   one a;
   two t;
   a.getdata();
   t.input();
   t.average(a);
   return 0;
}
