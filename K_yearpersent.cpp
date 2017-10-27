#include <iostream>
#include <cmath>
using namespace std;
// Ставка в банку складає p% річних, вклад - x грн, y коп. Відобразити суму через рік в форматі 100грн 20коп
int main() {
    int i = 0;
    double p, x, y, k, X, Y, answer, z;
    cin >> p >> x >> y >> k;
    z = (x * 100 + y);
    while (i < k)
    {
        answer = trunc(z + (z * (p / 100)));
        z = answer;
        i++;
    }
    answer = answer/100;
   X = trunc(answer); // відкинемо дробну частину
   Y = trunc((answer - X + 0.000000001) * 100);
   //cout << endl << answer << endl;
   cout << X << " " << Y << endl;
  // put your code here
  return 0;
}
