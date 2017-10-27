#include <iostream>
using namespace std;

int main()
{
    //input
    int n, m;
    cin >> n >> m;
    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    //operations
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
