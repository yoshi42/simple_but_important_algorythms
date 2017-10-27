#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    long n, min = 100000000000;
    cin >> n;
    vector <int> a(n);
    //ввід
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //обробка
    for (int i = 0; i < n; i++)
    {
        if ((a[i] % 2 == -1 || a[i] % 2 == 1) && a[i] < min)
        {
            min = a[i];
        }
    }
    if (min == 100000000000)
    {
        min = 0;
    }
    //вивід
    cout << min << endl;
    return 0;
}
