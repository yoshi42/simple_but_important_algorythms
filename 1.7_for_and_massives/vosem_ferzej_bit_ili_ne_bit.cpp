#include <iostream>
#include <vector>
using namespace std;

// Є ряд чисел:
int main()
{
    int n = 8;
    string flag = "NO";
    vector <int> a(n);
    vector <int> b(n);
    //ввід
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
        cin >> b[k];
    }

    //обробка
    for (int i = 0; i < n; i++) //каунтер для порівняння раз
    {
        for (int j = 0; j < n; j++) //каунтер для порівняння два
        {
            //умова порівняння
            if (((a[i] == a[j] || b[i] == b[j]) || (a[i] + b[i] == a[j] + b[j]) || (abs(a[i] - a[j]) == abs(b[i] - b[j]))) && i != j) // якщо хоч один елемент з ряду повторюється, окрім себе
            {
                flag = "YES" ; //ставимо флажок, що щось співпало
            }
        }
    }
    // вивід
    cout << flag << endl;
    return 0;
}
