#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //input
    int n, k;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cin >> k;

    //operations
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        if (i - k == j)
            {
               cout << matrix[i][j] << " ";
            }
        }
    }
    return 0;
}
