#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

double power(double a, double n)
{
    if (n == 0) return 1;//умова виходу з функції

    if (n < 0) return (1/a*power(a,n+1));

    if (n == 1) return a;

    return a*power(a, n-1);
}

int main()
{
    double a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}
