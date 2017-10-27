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
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i+=2
             )
        {
            int temp;
            temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
        }
    }

    else
    {
        for (int i = 0; i < n-1; i+=2
             )
        {
            int temp;
            temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
        }
    }


    //вивід
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
