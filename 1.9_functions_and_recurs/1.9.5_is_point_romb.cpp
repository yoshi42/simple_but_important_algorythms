#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;


double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
}


bool isPointSquare1na1(double a, double b)
{
    return (distance(abs(a), abs(b), 0, 0) <= distance(1, 1, 0, 0)); //сума модуля координат повинна дорівнювати одиниці
}
int main()
{
    double a, b;
    cin >> a >> b;
    if ((abs(a) + abs(b)) <= 1 && isPointSquare1na1(a, b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
