#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;


int minDivisor(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        return i;
    }
    return n;
}
int main()

{
    int n;
    cin >> n;
    cout << minDivisor(n) << endl;
    return 0;
}
