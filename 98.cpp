#include<iostream>
using namespace std;
class dcmotor
{
   public:
   float E,Ra,Ia;
};
class shunt:public dcmotor
{
   public:
   float Rsh;
   shunt(float e,float r,float i,float rs)
   {
      E=e;
      Ra=r;
      Ia=i;
      Rsh=rs;
   }
   void display()
   {
      float V=E+(Ia*Ra);
      float Ish=V/Rsh;
      float I=Ia+Ish;
      cout<<"current in shunt motor:"<<I<<endl;
      cout<<"voltage in shunt motor:"<<V<<endl;
   }
};
class series:public dcmotor
{
   public:
   float Rse;
   series(float e,float r,float i,float re)
   {
      E=e;
      Ra=r;
      Ia=i;
      Rse=re;
   }
   void display()
   {
      float I=Ia;
      float V=E+I*(Ra+Rse);
      cout<<"current in series motor:"<<I<<endl;
      cout<<"voltage in series motor:"<<V<<endl;
   }
};
class compound:public dcmotor
{
   public:
   float Rsh,Rse,Ish;
   compound(float e,float r,float i,float re, float is)
   {
      E=e;
      Ra=r;
      Ia=i;
      Rse=re;
      Ish=is;
   }
   void display()
   {
      float I=Ia+Ish;
      float V=E+(Ia*Ra)+(I*Rse);
      cout<<"current in compound motor:"<<I<<endl;
      cout<<"voltage in compound motor:"<<V<<endl;
   }
};
int main()
{
   shunt x(216.4,1.2,2.067,75);
   series y(184,1.2,5,6);
   compound z(186.4,1.2,2.067,6,2.93);
   x.display();
   y.display();
   z.display();
   return 0;
}

