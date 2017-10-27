#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double x, y, delta, deltax, deltay;

    delta = a*d-c*b;
    deltax = e*d-f*b;
    deltay = a*f-c*e;
    x=deltax/delta;
    y=deltay/delta;

    cout << x << " " << y << endl;

    return 0;
}
