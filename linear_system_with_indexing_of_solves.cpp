#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double x, y, delta, deltax, deltay;

    delta = a * d - c * b;
    deltax = e * d - f * b;
    deltay = a * f - c * e;

    if (delta != 0)
    {
        x = deltax / delta;
        y = deltay / delta;
        //cout << "the system is compatible (only solves)" << endl;
        cout << 2 << " " << x << " " << y << endl;
    }

    else if (delta == 0)
    {
        if (deltax != 0 || deltay != 0)
        {
            //cout << "the system is incompatible (no solves)" << endl;
            cout << 0 << endl;
        }

        else if (deltax == 0 && deltay == 0)
        {
            /*if (there is infinity solves and every of it has a form y=kx+n)
            {
                double k=1, n=1;
                cout << 1 << " " << k << " " << n << endl;
            }*/


            //cout << "the system is compatible (infinity solves)" << endl;
            cout << "delta == 0" << endl;
        }
    }
    return 0;
}
