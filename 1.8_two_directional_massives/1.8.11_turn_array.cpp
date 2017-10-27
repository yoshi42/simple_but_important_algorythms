#include <iostream>
using namespace std;

int main()
{
    //input
    int n, m;
    cin >> n >> m;
    int matrix1[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    //operations
    for (int i = 0; i < m; i++)
    {
        for (int j = n-1; j >= 0; j--)
        {
            cout << matrix1[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
