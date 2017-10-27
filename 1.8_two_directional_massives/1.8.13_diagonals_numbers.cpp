#include <iostream>
using namespace std;

int main()
{
    //input
    int n, m, p = 1;
    cin >> n >> m;
    int matrix1[n][m];

    for (int k = 0; k <= n*m; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(i + j == k)
                {
                    matrix1[i][j] = p;
                    p++;
                }

            }
        }
    }
    //output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix1[i][j] <= 9)
            {
                cout << " ";
            }
            cout << matrix1[i][j];
            if (matrix1[i][j] < 99)
            {
                cout << "  ";
            }
            if (matrix1[i][j] == 99)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
