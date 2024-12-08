//Лабораторная работа № 7
#include <cmath> 
#include <iostream> 
#include <iomanip> 
 
using namespace std; 

int** create_array (int n)
{
    int** A = new int * [n];

    for (int i = 0; i < n; i++) A[i] = new int [n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    return A;
}

void print_array (int** A, int n)
{
    for (int i; i < n; i++)
        {
        for (int j; j < n; j++) cout << A[i][j] << "\t";
        cout << "\n";
        }
}

int main(void) 
{ 
    int** A = create_array(2);
    print_array(A, 2);
}
