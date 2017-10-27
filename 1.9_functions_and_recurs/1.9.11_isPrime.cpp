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

bool isPrime(int n)
{
    if (minDivisor(n) == n)
        return true;
    else return false;
}
int main()

{
    int n;
    cin >> n;
    cout << (isPrime(n) ? "YES" : "NO");
    return 0;
}
