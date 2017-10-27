#include <iostream>
using namespace std;
// Є послідовність цифр, яка закінчується нулем. Вичислити найбільшу кількість однакович цифр підряд
int main()
{
    int n = 1, i = 1,  buf = 0, imax = 1;

    while (n != 0)
    {
        cin >> n;
        if (n == buf)
        {
            i++;
        }
        else
        {
            buf = n;
        }

        if (i > imax)
        {
            imax = i;
        }
        cout << i << endl;
    }
  return 0;
}
