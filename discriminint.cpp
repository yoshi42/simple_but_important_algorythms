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

    if (d < 0)
    {
        return 0;
    }

    if ((x1 && x2) == 0)
    {
        //cout << "double zero" << endl;
        return 0;
    }
    else if (x1 == 0)
    {
        //cout << "x1 zero" << endl;
        cout << x2;
    }

    else if (x2 == 0)
    {
        //cout << "x2 zero" << endl;
        cout << x1;
    }

    else if (x1 == x2)
    {
        cout << x1 << endl;
    }

    else
    {
        cout << min(x1, x2) << " " << max(x1, x2) << endl;
    }

return 0;
}
