#include <iostream>
using namespace std;

int main()
{
    //input
    int n, m, k, falsemeter;
    cin >> n >> m;
    bool matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cin >> k;

    //operations
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == false)
            {
                falsemeter++;
                if (falsemeter == k)
                {
                    cout << i+1 << endl;
                    return 0;
                }
            }
            else
            {
                falsemeter = 0;
            }
        }
        falsemeter = 0;
    }
    cout << 0 << endl;
    return 0;
}
