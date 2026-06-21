#include<iostream>
using namespace std;
class library
{
   string title;
   int acno,price,copy;
   public:
     library()
     {
	title=" ";
	acno=price=copy=0;
     }
     ~library()
     {
	cout<<"Destruction Executed.";
     }
     void details()
     {
	cout<<"Title of the book is..";
	cin>>title;
	cout<<"Enter the access number..";
	cin>>acno;
	cout<<"enter the price of the book..";
	cin>>price;
	cout<<"Enter the copies of the book..";
	cin>>copy;
     }
     int getdata()
     {
	return price;
     }
     int getcopy()
     {
	return copy;
     }
};
int main()
{
   int c1,c2,t;
   library l,l1,l2;
   l1.details();
   int a=l1.getdata();
   int b=l1.getcopy();
   c1=a*b;
   l2.details();
   int x=l2.getdata();
   int y=l2.getcopy();
   c2=x*y;
   t=c1+c2;
   cout<<"Total is.."<<t;
   return 0;
}   
