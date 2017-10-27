#include <iostream>
using namespace std;
// Знайти кількість локальних максимумів (коли елемент більший за попередній і наступний елемент)
int main()
{
    int now = 100000, old = 100000, oldold = 100000, counter = 0;

    while (now != 0)
    {
        if (oldold < old && old > now)
        {
            counter++;
        }
        oldold = old;
        old = now;
        cin >> now;
    }
    cout << counter << endl;
    return 0;
}
