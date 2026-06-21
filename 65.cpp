#include<iostream>
using namespace std;
template< class max, class min >
void maximum( max x,min y)
{
   if(x>y)
   {
      cout<<"the max is:"<<x<<endl;
   }
   else
   {
      cout<<"the max is:"<<y<<endl;
   }
}
int main()
{
   maximum(100,144.76);
   maximum(176.7,176.77);
   maximum('f','q');
   return 0;
}
