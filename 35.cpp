#include<iostream>
using namespace std;
class add
{
   protected:
      int a,b;
   public:
      virtual void getvalue()
      {
         cout<<"enter 2 valuse:";
         cin>>a>>b;
      }
      virtual void display()
      {
         int x=a+b;
         cout<<"sum:"<<x;
      }
};
class sub:public add
{
   protected:
      int c,d;
   public:
      void getvalue()
      {
         cout<<"\nenter 2 values:";
         cin>>c>>d;
      }
      void display()
      {
         int y=c-d;
         cout<<"difference:"<<y;
      }
};
class mul:public add
{
   protected:
      int e,f;
   public:
      void getvalue()
      {
         cout<<"\nenter 2 values:";
         cin>>e>>f;
      }
      void display()
      {
         int z=e*f;
         cout<<"mutipliction:"<<z;
      }
};
class div:public add
{
   protected:
      int g,h;
   public:
      void getvalue()
      {
         cout<<"\nenter 2 value:";
         cin>>g>>h;
      }
      void display()
      {
         int l=g/h;
         cout<<"division:"<<l;
      }
};
class mod:public add
{
   protected:
      int i,j;
   public:
      void getvalue()
      {
         cout<<"\nenter 2 values:";
         cin>>i>>j;
      }
      void display()
      {
         int k=i%j;
         cout<<"remainder:"<<k;
      }
};
int main()
{
   add *p;
   add A;
   p=&A;
   p -> getvalue();
   p -> display();
   sub S;
   p=&S;
   p -> getvalue();
   p -> display();
   mul M;
   p=&M;
   p -> getvalue();
   p -> display();
   div D;
   p=&D;
   p -> getvalue();
   p -> display();
   mod O;
   p=&O;
   p -> getvalue();
   p -> display();
   return 0;
}
