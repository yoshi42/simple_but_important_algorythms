#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, i = 0;
    double x, a, an, answer = 1;
    cin >> n >> x >> an;
    while (i != n)
    {
        cin >> a;
        answer = answer * an * x + a;
        an = 1;
        i++;
        //cout << "Vvedite a" << endl;
    }

    if (n == 0)
    {
        answer = an;
    }
    cout << answer << endl;
return 0;
}
