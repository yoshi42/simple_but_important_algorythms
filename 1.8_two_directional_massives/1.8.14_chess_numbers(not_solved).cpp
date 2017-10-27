#include <iostream>
using namespace std;

int main()
{
    //input
    int n, m;
    cin >> n >> m;
    int p = 1, k = m/2+m%2+1;
    int matrix1[n][m];

    //заповнюємо матрицю нулями
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matrix1[i][j] = 0;
            }
        }
    //заповнюємо непарні строки і непарні стовпці
    for (int i = 0; i < n; i+=2)
            {
                for (int j = 0; j < m; j+=2)
                {
                    matrix1[i][j] = p;
                    p++;
                }
                p+=m/2; //m/2 наступних чисел - пропускаємо
            }
    //заповнюємо парні строки і парні стовпці
    for (int i = 1; i < n; i+=2)
            {
                for (int j = 1; j < m; j+=2)
                {
                    matrix1[i][j] = k;
                    k++;
                }
                k+=m/2+m%2;
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
