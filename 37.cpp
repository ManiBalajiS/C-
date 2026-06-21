#include <iostream>
#include <cmath>
using namespace std;

class Rect {
    double real, img;
public:
    Rect(double k,double l) {
        real = k;
        img = l;
    }
    void print() {
        if (img > 0)
            cout << real << "+j" << img << endl;
        else if (img < 0)
            cout << real << "-j" << (-img) << endl;
        else
            cout << real << endl;
    }
};

class Polar {
    double r;
    double th;
public:
    Polar(double c, double d) {
        r = c;
        th = d;
    }
    operator Rect() const {
        double x = r * cos(th);
        double y = r * sin(th);
        return Rect(x, y);
    }
};

int main() {
    double m, d;
    cout << "Enter magnitude: ";
    cin >> m;
    cout << "Enter angle in degrees: ";
    cin >> d;
    double rd = d * 3.14159 / 180;
    Polar p(m, rd);
    Rect r = p;
    r.print();

    return 0;
}
