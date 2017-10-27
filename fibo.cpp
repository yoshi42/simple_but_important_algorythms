#include <iostream>
using namespace std;
// На вхід поступає порядковий номер числа Фібоначчі, виводиться саме число
int main()
{
  int n , i = 0, fibold = 0, fibonew = 1, buf=1;
  cin >> n;
  while (i < n)
  {
      buf = fibold + fibonew;
      fibold = fibonew;
      fibonew = buf;
      i++;
  }
  cout << fibold << '\n';
  return 0;
}
