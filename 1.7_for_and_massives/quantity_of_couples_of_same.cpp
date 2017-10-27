#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int n, counter = 0;
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
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                counter++;
            }
        }
    }

    //вивід
    cout << counter << " ";
    return 0;
}
