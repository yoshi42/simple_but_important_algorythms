#include <iostream>
#include <cmath>
using namespace std;
// Ставка в банку складає p% річних, вклад - x грн, y коп. Відобразити суму через рік в форматі 100грн 20коп
int main() {
    double p, x, y, X, Y, answer;
    cin >> p >> x >> y;
    answer = (x+y/100)+(x+y/100)*(p/100);
    X = trunc(answer);
    Y = trunc((answer-X+0.00000001)*100);
    cout << endl << answer << endl;
    cout << X << "грн" << " " << Y << "коп" << endl;
  // put your code here
  return 0;
}
