#include<iostream>
using namespace std;
class student
{
   int rn,ra;
   string name;
   float cgpa;
   public:
   void getdata()
   {
   cout<<" Enter name:";
   cin>> name;
   cout<<" Enter the rollno:";
   cin>> rn;
   cout<<" Enter the CGPA:";
   cin>> cgpa;
   cout<< " No.of arears:";
   cin>> ra;
   }
   void dispaly()
   {
   cout<<" NAME:"<<name<< endl;
   cout<<" ROLL.NO:"<< rn << endl;
   cout<< " CGPA:"<< cgpa<<endl;
   cout<< " NO. OF ARREARS:"<<ra<< endl;
   }
   void max(student s[])
   {
      float x= s[0].cgpa;
      for( int i=0;i<4;i++)
      {
	 if(s[i].cgpa > x)
	 {
	    x=s[i].cgpa;
	 }
      }
      cout<< " Higest CGPA:"<< x<<endl;
     
   }
   void min( student s[])
   {
      float y=s[0].cgpa;
      for ( int j=0;j<4;j++)
      {
	 if(s[j].cgpa < y)
	 {
	    y=s[j].cgpa;
	 }
      }
      cout<< " Lowest CGPA:"<< y<< endl;
     
   }
};
int main()
{
   student s[4],s1;
   for ( int a=0;a<4;a++)
   {
      s[a].getdata();
   }
   for ( int a=0;a<4;a++)
   {
      s[a].dispaly();
   }
  s1.max(s);
  s1.min(s);
   
   return 0;
}
