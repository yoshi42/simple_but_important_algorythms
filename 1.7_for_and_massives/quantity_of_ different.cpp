#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    long n, counter = 0;
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
        if (a[i] != a[i-1])
        {
             counter++;
        }
    }
    //вивід
    cout << counter << endl;
    return 0;
}
