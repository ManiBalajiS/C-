#include <iostream>
using namespace std;
class Motor
{
public:
    void backemf(int i,int Rsh ,int V=220,double Ra=1.2)
    {
        double ish = V/Rsh;
        double ia =i-ish;
        double Eb =V-(ia*Ra);
        cout <<"Shunt Motor Back EMF in volts: " << Eb <<endl ;
    }
    void backemf(int i,double Ra,int V=220,int Rse=6)
    {
        double Eb=V-(i*(Ra+Rse));
        cout << "Series Motor Back EMF in volts: " <<Eb<< endl;
    }
    void backemf(int i,double Ra,double Rse,int V=220 , int Rsh=75)
    {
        double ish=V/Rsh;
          double ia=i-ish;
        double Eb1=V-(ia*(Ra+Rse));
        cout << "long shunt Compound Motor Back EMF in volts: " << Eb1 << endl;
        double Eb2=V-(ia*Ra)-(i*Rse);
        cout<< "short shunt Compound Motor Back EMF in volts:"<< Eb2<< endl;
    }
};
int main()
{
    Motor m;
    m.backemf(5,1.2);
    m.backemf(5,75);
    m.backemf(5,1.2,6.0);
    return 0;
}
