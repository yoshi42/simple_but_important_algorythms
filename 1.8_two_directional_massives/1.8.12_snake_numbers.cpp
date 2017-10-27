#include <iostream>
using namespace std;

int main()
{
    //input
    int n, m;
    cin >> n >> m;
    int k = 1, p = m+1;
    int matrix1[n][m];

        for (int i = 0; i < n; i+=2)
        {
            for (int j = 0; j < m; j++)
            {
                matrix1[i][j] = k;
                k++;
            }
            k+=m;
        }
        for (int i = 1; i < n; i+=2)
        {
            for (int j = m-1; j >= 0; j--)
            {
                matrix1[i][j] = p;
                p++;
            }
            p+=m;
        }

    //operations
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix1[i][j] <= 9)
            {
                cout << " ";
            }
            cout << matrix1[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
