//Лабораторная работа № 7
#include <cmath> 
#include <iostream> 
#include <iomanip> 
 
using namespace std; 

int** create_matrix (int n)
{
    int** A = new int * [n];

    for (int i = 0; i < n; i++) A[i] = new int [n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Введите элемент матрицы: ";
            cin >> A[i][j];
        }
    return A;
}

void print_matrix (int** A, int n)
{
    for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < n; j++) cout << A[i][j] << "\t";
        cout << "\n";
        }
}

int max_number_of_line(int** A, int n, int m)
{
    int maxn = A[m][n];
    for (int i = 0; i < n; i++)
        if (maxn < A[m][i]) maxn = A[m][i];

    return maxn;
}

int** replacing_zeros(int** A, int n, int k)
{
    int a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a = A[i][j];
            if (a != 0)
            {
                while (a > 0)
                {
                    if (a % 10 == 0)
                    {
                        A[i][j] = k;
                        break;
                    }
                    a = a / 10;
                }
            }
            else A[i][j] = k;
        }
    }
    return A;
}

int main(void) 
{ 
    int n;
    int k = 0;
    int K = 1;
    cout << "Введите порядок квадратной матрицы: ";
    cin >> n;

    int** A = create_matrix(n);
    
    for (int i = 0; i < n; i++)
    {
        K *= A[i][i];
        if (max_number_of_line(A, n, i) != A[i][i]) 
        {
            k += 1;
        }
    }
    if (k == 0) print_matrix(replacing_zeros(A, n, K), n);
    else print_matrix(A, n);

    delete[] A;
}
