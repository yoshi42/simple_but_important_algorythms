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

    //обробка
    for (int i = n-1; i > 0; i--)
    {
        int temp;
        temp = a[i-1];
        a[i-1] = a[i];
        a[i] = temp;
    }

    //вивід
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
