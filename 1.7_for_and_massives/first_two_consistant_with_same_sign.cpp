#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    //ввід
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //обробка і вивід
    for (int i = 1; i < n; i++)
    {
        if ((a[i-1] >= 0 && a[i] >= 0) || (a[i-1] <= 0 && a[i] <= 0))
        {
            cout << min(a[i], a[i-1]) << " " << max(a[i], a[i-1]) << endl;
            i=n;
        }
    }
    return 0;
}
