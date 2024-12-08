//Лабораторная работа № 6
#include <cmath> 
#include <iostream> 
#include <iomanip> 
 
using namespace std; 

bool prime_number(long x) { 
 for (int i = 2; i < int(sqrt(x))+1; i++) 
 { 
  if (x%i==0) 
  { 
   return false; 
  } 
 } 
 return true; 
} 
 
int* sorting_array(int* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - i; j++)
		{
			if (A[i] > A[j])
			{
				swap(A[i], A[j]);
			}
		}
	}
	return A;
}

int* sorting_array_sum_of_dig(int* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - i; j++)
		{
			if (A[i] > A[j])
			{
				swap(A[i], A[j]);
			}
		}
	}
	return A;
}

void Task_1()
{
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nВведите " << i + 1 << "-й элемент массива: ";
		cin >> A[i];
	}
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (prime_number(A[i]))
		{
			k += 1;
			break;
		}
	}
	if (k == 0)
	{
		cout << sorting_array(A, n);
	}
	else
	{
		cout << A;
	}
	delete[] A;
}

void Task_2()
{
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	int* A = new int[n];

}

void Task_3()
{
	int m, n, mxl;
	long max_number;
	cout << "Введите размеры матрицы (m, n): ";
	cin >> m >> n;

	int* A = new int[m];
	int* B = new int[m];
	int* C = new int[n];
	mxl = 1;

	for (int i = 0; i < m; i++)
	{
		B[i] = 1;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[j][i];
			B[i] *= A[j][i];
		}
		if (i > 0 && B[i] > B[i-1])
		{
			mxl = i;
			max_number = B[i];
		}
	}
	for (int i = 0; i < m; i++)
	{
		A[i][mxl] = max_number;
	}
	for (int i = 0; i < m; i++)
	{
		cout <<"\n";
		for (int j = 0; j < n; i++)
		{
			cout << A[j][i] << "	";
		}
	}
}

int main(void) 
{ 
	Task_3;
}
