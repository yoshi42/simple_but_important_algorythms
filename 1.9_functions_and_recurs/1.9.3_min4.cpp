#include <iostream>
using namespace std;

int min2(int a, int b)
{
    if (a <= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min2(min2(a, b), min2(c, d)) << endl;
    return 0;
}
