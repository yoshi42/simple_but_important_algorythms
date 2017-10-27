#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;


double distance(double x1, double y1, double x2, double y2) //просто міряє дистанцію від точки до точки
{
    return sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
}

bool isPointline60(double x, double y) // чи точка справа нижче
{
    return (2*x+2 >= y);
}

bool isPointline45(double x, double y) // чи точка справа вище
{
    return (x >= -y);
}

bool isPointCircle(double x, double y) //чи точка всередині кола
{
    return (distance(x, y, -1, 1) <= 2);
}

bool notisPointline60(double x, double y) // чи точка справа нижче
{
    return (!(2*x+2 > y));
}

bool notisPointline45(double x, double y) // чи точка справа вище
{
    return (!(x > -y));
}

bool notisPointCircle(double x, double y) //чи точка всередині кола
{
    return (!(distance(x, y, -1, 1) < 2));
}


int main()
{
    double x, y;
    cin >> x >> y;
    if ((isPointCircle(x, y) && isPointline45(x, y) && notisPointline60(x,y)) ||
            (notisPointCircle(x, y) && notisPointline45(x, y) && isPointline60(x,y)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
