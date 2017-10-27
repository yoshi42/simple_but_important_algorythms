#include <iostream>
#include <cmath>
using namespace std;

double power(double a, int n)
{
    if (n == 0) return 1;//умова виходу з функції

    if (n == 1) return a;

    if (n % 2 == 0)
    {
        return ((a*a)*power(a*a, n/2-1));
    }
    else
    {
        return (a*power(a, n-1 ));
    }
}

int main()
{
    double a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}
