#include <iostream>
#include <vector>
using namespace std;

// Є ряд чисел:
int main()
{
    int n = 0, k = 0, l = 0, r = 0 ;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < a.size(); i++)
    {
        a[i] = 1;
    }
    cin >> k;
    for (int w = 0; w < k; w++)
    {
        cin >> l;
        cin >> r;

        for (int j = l-1; j < r; j++)
        {
            a[j] = 0;
        }
    }

    // вивід
    for (int q = 0; q < a.size(); q++)
    {
        if (a[q] == 1)
        {
            cout << "I";
        }
        else if (a[q] == 0)
        {
            cout << ".";
        }
    }
    return 0;
}
