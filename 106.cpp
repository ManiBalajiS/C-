#include<iostream>
using namspace std;
class A
{
   protected:
      int a;
   public:
      virtual void getdata()
      {
	 cout<<"Enter A value..";
	 cin>>a;
      }
      virtual void display()
      {
	 cout<<"A = "<<a;
      }
};
class B
{
   protected:
      int b;
   public:
      virtual void getdata()
      {
         cout<<"Enter B value..";
         cin>>b;
      }
      virtual void display()
      {
         cout<<"B = "<<b;
      }
};
class C
{
   protected:
      int c;
   public:
      virtual void getdata()
      {
         cout<<"Enter C value..";
         cin>>c;
      }
      virtual void display()
      {
         cout<<"C = "<<c;
      }
};
class D
{
   protected:
      int d;
   public:
      virtual void getdata()
      {
         cout<<"Enter D value..";
         cin>>d;
      }
      virtual void display()
      {
         cout<<"D = "<<d;
      }
};
class E
{
   protected:
      int e;
   public:
      virtual void getdata()
      {
         cout<<"Enter E value..";
         cin>>e;
      }
      virtual void display()
      {
         cout<<"E = "<<e;
      }
};
class F
{
   protected:
      int f;
   public:
      virtual void getdata()
      {
         cout<<"Enter f value..";
         cin>>f;
      }
      virtual void display()
      {
         cout<<"F = "<<f;
      }
};
int main()
{
   a *p;
   a o1;
   p=&o1;
   o1.getdata();
   o1.display();
   b o2;
   p=&o2;
   o2.getdata();
   o2.display();
   c o3;
   p=&o3;
   o3.getdata();
   o3.display();
   d o4;
   p=&o4;
   o4.getdata();
   o4.display();
   e o5;
   p=&o5;
   o5.getdata();
   o5.display();
   f o6;
   p=&o6;
   o6.getdata();
   o6.display();
   return 0;
}

