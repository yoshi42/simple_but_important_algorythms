#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    vector <int> a(n);
    //ввід
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //обробка і вивід
    for (int i = 0; i < n; i++)
    {   if (a[i] > 0)
        {
            k++;
        }
    }
    cout << k << endl;
    return 0;
}
