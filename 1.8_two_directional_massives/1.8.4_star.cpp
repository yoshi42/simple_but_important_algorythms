#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //input
    int n;
    cin >> n;
    string matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = ".";
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1 || i == n/2 || j == n/2)
            {
                matrix[i][j] = "*";
            }

        }
    }

    //output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
