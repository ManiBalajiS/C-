#include<iostream>
#include<math.h>
using namespace std;
class Rect;
class Polar{
   float Mag,Theta;
   public:
   Polar(float m,float t){
      Mag=m;
      Theta=t;
   }
   operator Rect();
   void Display(){ cout<<Mag<<"/"<<Theta<<endl; }
};
class Rect{
   float Real,Img;
   friend class Polar;
   public:
   Rect(){
      Real=0;
      Img=0;
   }
   void Display(){
      cout<<Real<<"+i"<<Img<<endl;
   }
};
Polar::operator Rect(){
         Rect temp;
         temp.Real=Mag*cos(Theta);
         temp.Img=Mag*sin(Theta);
         return temp;
}
int main(){
   float M,T;
   cout<<"Enter Magnitude: ";
   cin>>M;
   cout<<"Enter Angle: ";
   cin>>T;
   Polar P(M,T);
   Rect R=P;
   P.Display();
   R.Display();
   return 0;
}
