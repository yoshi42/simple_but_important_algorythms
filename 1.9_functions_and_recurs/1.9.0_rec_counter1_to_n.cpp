#include <iostream>
using namespace std;
int iterator1(int i, int n)
{
    if(i < n)
    {
        i++;
        cout << i << endl;
        iterator1(i, n);
    }
    return 0;
}

int main()
{   int n, i = 0;
    cin >> n;
    iterator1(i, n);
    return 0;
}
