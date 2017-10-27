#include <iostream>
#include <cmath>
using namespace std;
//2 шари, N поверхів,назвати найменшу кількість ітерацій по визначенню поверху, де шар починає розбиватися
//На вхід отримуємо номер поверху і номер, на якому шар розіб'ється
int halfer(int floor, int broke)
{
    if (broke < floor)
    {
        floor = floor / 2 + floor%2;
        halfer(floor, broke);
    }
    else
    {
        return floor;
    }
}

int main()
{   int floor, broke;
    cin >> floor >> broke;

    cout << halfer(floor, broke) << endl;
    return 0;
}
