#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int n, last = 10000000;
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
        if (a[i] > 0 && a[i] < last)
        {
            last = a[i];
        }
    }
    //вивід
    cout << last << endl;
    return 0;
}
