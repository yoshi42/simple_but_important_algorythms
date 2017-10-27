#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n = -1;
    double x = -1, sum = 0, square = 0, answer = 0;

    while (x != 0)
    {
        cin >> x;
        square = square + pow(x, 2);
        sum = sum + x;
        n++;
    }
    answer = sqrt((square - (pow(sum, 2)/n))/(n-1));
    cout << setprecision(12) << answer << endl;
return 0;
}
