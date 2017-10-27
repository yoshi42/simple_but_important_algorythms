#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;

    d = pow(b, 2) - (4 * a * c);
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);

    if (a == 0 && b != 0 && c != 0)
    {
        x1 = -c/b;
        cout << 1 << endl;
        cout << x1 << endl;
        return 0;
    }

    if (a == 0 && b == 0 && c != 0)
    {
        cout << 0 << endl;
        return 0;
    }

    if (a == 0 && b == 0 && c == 0)
    {
        cout << 3 << endl;
        return 0;
    }

    if (a == b && c == 0)
    {
        x1 = 0;
        x2 = -b/a;
        cout << 2 << endl;
        cout << min(x1, x2) << " " << max(x1, x2) << endl;
        return 0;
    }

    if (d < 0)
    {
        cout << 0 << endl;
        return 0;
    }

    if ((x1 && x2) == 0)
    {
        //cout << "double zero" << endl;
        cout << 0 << endl;
        return 0;
    }
    else if (x1 == 0)
    {
        //cout << "x1 zero" << endl;
        cout << 1 << endl;
        cout << x2;
    }

    else if (x2 == 0)
    {
        //cout << "x2 zero" << endl;
        cout << 1 << endl;
        cout << x1;
    }

    else if (x1 == x2)
    {
        cout << 1 << endl;
        cout << x1 << endl;
    }

    else
    {
        cout << 2 << endl;
        cout << min(x1, x2) << " " << max(x1, x2) << endl;
    }

return 0;
}
