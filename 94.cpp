#include<iostream>
using namespace std;
class digits
{
public:
   int n,count,*m,temp,r;
   digits()
   {
      n=0;
   }
   void getdata()
   {
      cout<<"Enter the numbers for the counts....";
      cin>>n;
   }
   void process()
   {
      count=1;
      temp=n;
      while(n>1)
      {
	 n=n/10;
	 count++;
      }
      int *m=new int[count];
      for(int i=0;i<=count;i++)
      {
	 r=temp%10;
	 m[i]=r;
	 temp=temp/10;
	 cout<<m[i]<<endl;
      }
      cout<<"The number of digits is...."<<count<<endl;
      for(int j=count-1;j<0;j--)
      {
	 cout<<m[j];
      }
   }
};
int main()
{
  digits d1;
  d1.getdata();
  d1.process();
  return 0;
}
