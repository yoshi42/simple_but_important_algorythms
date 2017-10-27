#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //input
    int m, n, m1 = 1, n1 = 1, maxQ = 0;
    cin >> n >> m;
    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(matrix[i][j] > maxQ)
            {
                maxQ = matrix[i][j];
                n1 = i+1;
                m1 = j+1;
            }
        }
    }

    //output

    cout << n1 << " " << m1 << endl;
    return 0;
}
