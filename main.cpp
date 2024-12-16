//Лабораторная работа № 6
#include <cmath> 
#include <iostream> 
#include <iomanip> 
 
using namespace std; 

void swapp (int& x, int& y)
{
  int a = x;
  x = y;
  y = a;
  return;
}

bool prime_number(long x) 
{ 
    for (int i = 2; i < int(sqrt(x))+1; i++) 
        if (x % i == 0) return false;
    return true; 
} 
 
int* sorting_array(int* A, int n)
{
  cout <<"WADAFAQ\n";

  for (int i = 0; i < n; i++)
    for (int j = i; j < n; j++)
    {
      if (A[i] > A[j]) swapp(A[i], A[j]); 
    }
  return A;
}

int sum_of_dig(int x)
{
  int s = 0;
  while (x > 0)
  {
    s += (x % 10);
    x = x / 10;
  }
  return s;
}

int mul_of_dig(int x)
{
  int m = 1;
  while (x > 0)
  {
    m *= (x % 10);
    x = x / 10;
  }
  return m;
}

int* sorting_array_sum_of_dig(int* A, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (sum_of_dig(A[i]) > sum_of_dig(A[j])) swapp(A[i], A[j]);
    }
  }
  return A;
}

void move_el(int* A, int n, int i)
{
  int a;
  for (int j = i - 1; j < n - 1; j++)
  {
    a = A[j + 1];
    A[j + 1] = A[i];
    A[i] = a;
  }
  A[n] = A[i];
  A[i] = A[i + 1];
  return;
}

bool is_cube(int x)
{
  for (int i = 0; i < sqrt(x) + 1; i++)
  {
    if (x == i * i * i) 
    {
      return true;
    }
  }
  return false;
}

void Task_1()
{
  cout << "\nTask 1\n";
  int n, k;
  k = 0;
  cout << "Введите размер массива: ";
  cin >> n;

  int* A = new int[n];

  for (int i = 0; i < n; i++)
  {
    cout << "\nВведите эдемент массива: ";
    cin >> A[i];
    if (prime_number(A[i])) k++;
  }
  if (k > 0) for (int i = 0; i < n; i++) cout << A[i] << "    ";
  else 
  {
    sorting_array(A, n);
    for (int i = 0; i < n; i++) cout << A[i] << "   ";
  }
  delete[] A;
}

void Task_2()
{
    cout << "\nTask 2\n";
  int n;

  cout << "Введите размер массива: ";
  cin >> n;

  int* A = new int[n];
  for (int i = 0; i < n; i++)
  {
    cout << "\nВведите элемент массива: ";
    cin >> A[i];
  }

  sorting_array_sum_of_dig(A, n);

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < i + 2; j++)
    {
      if (sum_of_dig(A[i]) == sum_of_dig(A[j]))
      {
        if (mul_of_dig(A[i]) > mul_of_dig(A[j])) swapp(A[i], A[j]);
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < i + 2; j++)
    {
      if (sum_of_dig(A[i]) == sum_of_dig(A[j]))
      {
        if (mul_of_dig(A[i]) == mul_of_dig(A[j]))
        {
          if (A[i] > A[j]) swapp(A[i], A[j]);
        }
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << A[i] << "\t";
  }
  delete[] A;
}

void Task_3()
{
    cout << "\nTask 3\n";
    int m, n, k;
    long max_number = -9999999;
    long max_number_helper = 1;

    cout << "Введите количество строк, затем столбцов: ";
    cin >> n >> m;
    int** A = new int*[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cout << "\nВведите элемент матрицы: ";
            cin >> A[i][j];
            max_number_helper *= A[i][j];
        }
        if (max_number_helper > max_number) 
        {
            max_number = max_number_helper;
            k = i;
        }
        max_number_helper = 1;
    }

    for (int i = 0; i < m; i++)
    {
        A[k][i] = max_number;
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }
  delete[] A;
}

const int N = 20000;

void Task_4()
{
  cout << "\nTask 4\n";
  int n;
  cout << "Введите количество элементов: ";
  cin >> n;
  int A[N];
  for (int i = 0; i < N; i++)
  {
    A[i] = 0;
  }
  

  for (int i = 0; i < n; i++)
  {
    cout << "\nВведите элемент массива: ";
    cin >> A[i];
  }

  for (int i = 0; i < n; i++)
    if (prime_number(A[i])) A[i] = 0;
  
  for (int i = 0; i < n; i++)
  {
    if (is_cube(A[i]) && A[i] != 0)
    {
      move_el(A, n, i);
      A[i + 1] = A[i];
      i++;
      n++;
    } 
    
  }
  

  for (int i = 0; i < n; i++)
  {
    cout << A[i] << "\t";
  }
  
}

int main(void) 
{ 
  Task_1();
  Task_2();
  Task_3();
  Task_4();
}
