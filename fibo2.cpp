#include <iostream>
using namespace std;
// на вхід поступає одне з чисел Фібоначчі. виводиться його порядковий номер. Якщшо число
// не Фібоначчі - виводиться -1

int main()
{
  int n = 0, i = 0, fibold, fibonew = 1, buf;
  cin >> n;

  while (fibonew <= n)
  {
      buf = fibold + fibonew;
      fibold = fibonew;
      fibonew = buf;
      i++;
  }

  if (n == fibold)
  {
      cout << i << '\n';
  }
  else
  {
      cout << -1 << endl;
  }
  return 0;
}
