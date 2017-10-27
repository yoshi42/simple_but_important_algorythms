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
    for (int i = 0; i < n; i += 2)
    {
         cout << a[i] << " ";
    }
    return 0;
}
