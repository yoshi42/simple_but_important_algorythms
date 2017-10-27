#include <iostream>
#include <cmath>
using namespace std;

int fibber (int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fibber(n-1)+fibber(n-2);
}

int main()
{   int n;
    cin >> n;
    cout << fibber(n) << endl;
    return 0;
}
