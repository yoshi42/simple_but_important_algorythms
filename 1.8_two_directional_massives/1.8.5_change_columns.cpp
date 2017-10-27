#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //input
    int n, m, a, b, temp;
    cin >> n >> m;
    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin >> matrix[i][j];
        }
    }

    cin >> a >> b;

    //operations

    for (int i = 0; i < n; i++)
    {
        temp = matrix[i][a];
        matrix[i][a] = matrix[i][b];
        matrix[i][b] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
