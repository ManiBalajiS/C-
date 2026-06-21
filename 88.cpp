#include<iostream>
using namespace std;
class addition
{
   int f,i;
   public:
   void input()
   {
      cout<< "Enter the feet:";
      cin>> f;
      cout<< "Enter the inch:";
      cin>> i;
   }
   friend void add( addition a, addition b);
};
void add( addition a, addition b)
{
   int p,q,x,y,z;
   p=a.f+b.f;
   q=a.i+b.i;
   z=q/12;
   y=q%12;
   x=p+z;
   cout<<"Total feet:"<< x<< endl;
   cout<<"Total inch:"<< y<< endl;
}
int main()
{
   addition c,d;
   c.input();
   d.input();
   add( c,d);
   return 0;
}
