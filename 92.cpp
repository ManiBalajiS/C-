#include<iostream>
using namespace std;
class student
{
   int rno,cc;
   public:
   student() {}
   student(int x, int y)
   {
      rno=x;
      cc=y;
   }
   student( student & k)
   { 
      cc=k.cc;
   }
   void display() 
   { 
      cout<< " The college code is .."<< cc;
   }
};
int  main()
{
   int a,b;
   cout<<"Enter the register number...";
   cin>> a;
   cout<<"Enter the college ID...";
   cin>>b;
   student s(a,b);
   student s1(s);
   student s2=s;
   s.display();
   s1.display();
   s2.display();
}
