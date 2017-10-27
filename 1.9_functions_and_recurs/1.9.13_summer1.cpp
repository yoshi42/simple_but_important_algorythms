#include <iostream>
#include <cmath>
using namespace std;

int summer(int n)
{
    cin >> n;
    if (n != 0)
    {
        return n+summer(n);
    }
    return n;
}

int main()
{   int n = 0;
    cout << summer(n) << endl;
    return 0;
}
