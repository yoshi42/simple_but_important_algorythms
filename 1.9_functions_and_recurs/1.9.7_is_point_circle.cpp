#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;


double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
}


bool isPointSquare1na1(double x, double y, double xc, double yc, double r)
{
    return (distance(x, y, xc, yc) <= r); //сума модуля координат повинна дорівнювати одиниці
}
int main()
{
    double x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    if (isPointSquare1na1(x, y, xc, yc, r))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
