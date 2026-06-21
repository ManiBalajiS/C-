#include<iostream>
using namespace std;
const  int n=7;
template< class s >
class stack
{
   s*x;
   int head;
   public:
   stack()
   {
      head=-1;
      x=new s[n];
   }
   void push(s p)
   {
      if(head<7)
      {
         head++;
         x[head]=p;
      }
      else
      {
         cout<<"stack is overflow";
      }
   }
   void pop()
   {
      if((head>0)&&(head<7))
      {
         cout<<" the top is:"<<x[head]<<endl;
         head--;
      }
      else
      {
         cout<<"stack is empty";
      }
   }
};
int main()
{
   stack <int> q;
   q.push(10);
   q.push(15);
   q.push(20);
   q.pop();
   stack <double> k;
   k.push(7.2);
   k.push(12.6);
   k.pop();
   return 0;
}
