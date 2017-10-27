#include <iostream>
using namespace std;

int main()
{
    //input
    int n, m;
    cin >> n >> m;
    int n0 = 0, m0 = 0, nmax = n-1, mmax = m-1, p = 1;
    int matrix1[n][m];

    //zeroing
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix1[i][j] = 0;
        }
    }

    //operating
    while (p <= n*m)
    {
        if (p <= n*m)
        {
            for (int j = m0; j <= mmax; j++)
            {
                matrix1[n0][j] = p;
                p++;
            }
            n0++;
        }

        if (p <= n*m)
        {
            for (int i = n0; i <= nmax; i++)
            {
                matrix1[i][mmax] = p;
                p++;
            }
            mmax--;
        }

        if (p <= n*m)
        {
            for (int j = mmax; j >= m0; j--)
            {
                matrix1[nmax][j] = p;
                p++;
            }
            nmax--;
        }

        if (p <= n*m)
        {
            for (int i = nmax; i >= n0; i--)
            {
                matrix1[i][m0] = p;
                p++;
            }
            m0++;
        }
    }
    int z = 1;
    if (m == 1 || n == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matrix1[i][j] = z;
                z++;
            }
        }
    }
    //output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix1[i][j] < 10)
            {
                cout << "   ";
            }
            if (matrix1[i][j] > 9 && matrix1[i][j] <= 99)
            {
                cout << "  ";
            }
            if (matrix1[i][j] >= 100)
            {
                cout << " ";
            }
            cout << matrix1[i][j];
        }
        cout << endl;
    }
    return 0;
}
