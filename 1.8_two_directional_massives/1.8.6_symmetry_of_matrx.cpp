#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //input
    int n, p = 0;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    //operations
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        if (matrix[i][j] == matrix[j][i])
            {
                matrix[i][j] = 0;
                matrix[j][i] = 0;
            }
        }
    }
    //check&output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                p++;
            }
            else
            {
                p = 0;
            }

           // cout << p << endl;
        }
        cout << endl;
    }

    if (p == n*n)
    {
        cout << endl << "YES" << endl;
    }

    else
    {
        cout << endl << "NO" << endl;
    }
    return 0;
}
