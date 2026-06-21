#include<iostream>
using namespace std;
class circuit
{
   int v;
   public:
   circuit()
   {
      v=100;
   }
   void current(float r1)
   {
      float i;
      i=v/r1;
      cout<<" Current through the resistor 1 is..."<< i<< endl;
   }
   void current( float r1, float r2)
   {
      float i1,i2;
      i1=v/r1;
      i2=v/r2;
      cout<<"Current through the resistor 1 is ...."<< i1<< endl;
      cout<<"Current through the resistor 2 is ...."<< i2<< endl;
   }
   void current( float r1, float r2, float r3)
   {
      float i1,i2,i3;
      i1=v/r1;
      i2=v/r2;
      i3=v/r3;
      cout<<" Current through the resistor 1 is ...."<< i1<<endl;
      cout<<" Current through the resistor 2 is ...."<< i2<< endl;
      cout<<" Current through the resistor 3 is ...."<< i3<< endl;
   }
};
int main()
   {
      float r1,r2,r3;
      circuit c;
      cout<<" Enter resistor values:";
      cin>> r1>> r2>> r3;
      c.current(r1);
      c.current(r1,r2);
      c.current(r1,r2,r3);
      return 0;
   }
