#include<iostream>
using namespace std;
class DCM
{
   protected:
      float v,ra;
   public:
      DCM()
      {
	 v=230.00;
	 ra=1.2;
      }
};
class shuntmotor:public DCM
{
   int i,ifi,ia,eb;
   public:
      shuntmotor(int a,int b,int c,int d)
      {
	 i=a;
	 ifi=b;
	 ia=c;
         eb=d;
      }
      int calculate()
      {
	 float I,v;
	 I=i-ifi;
	 v=eb+(ia*ra);
	 cout<<"SHUNT MOTOR CURRENT IS..."<<I<<endl;
	 cout<<"SHUNT MOTOR VOLTAGE IS..."<<v<<endl;
      }
};
class seriesmotor:public DCM
{
   int v1,rf,eb,i1,r;
   public:
        seriesmotor(int a,int b,int c,int d,int e)
	{
	   v1=a;
	   rf=b;
	   eb=c;
	   i1=d;
	   r=e;
	}
	int calculate()
	{
	   float IA1,V1;
	   IA1=v1/(ra+rf);
	   V1=eb+i1*(r+ra);
	   cout<<"SERIES MOTOR CURRENT IS..."<<IA1<<endl;
	   cout<<"SERIES MOTOR VOLTAGE IS..."<<V1<<endl;
	}
};
class compoundmotor:public DCM
{
   int i2,v2,rsh,eb,ia2;
   public:
        compoundmotor(int a,int b,int c,int d,int e)
	{
	   i2=a;
	   v2=b;
	   rsh=c;
	   eb=d;
	   ia2=e;
	}
	int calculate()
	{
	   float IA2,V2;
	   IA2=i2-(v2/rsh);
	   V2=eb+(ia2*ra)+(i2*rsh);
       	   cout<<"COMPUND MOTOR CURRENT IS..."<<IA2<<endl;
	   cout<<"COMPOUND MOTOR VOLTAGE IS..."<<V2<<endl;
	}
};
int main()
{
   shuntmotor h(45,56,7,90);
   seriesmotor h1(33,56,78,67,34);
   compoundmotor h2(45,6,78,3,56);
   h.calculate();
   h1.calculate();
   h2.calculate();
   return 0;
}
