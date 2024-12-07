#include <iostream>

using namespace std;

void Task_1()
{
	long long maxn = -99999; 
    long sumn = 0; 
    int j, k; 
    cout << "Введите количество элементов массива: "; 
    cin >> j; 
    int* A = new int[j] {}; 
    for (int i = 0; i < j; i++) 
    { 
        cout << "\nВведите " << i + 1 << "й элемент массива: "; 
        cin >> A[i]; 
        sumn += A[i]; 
        if (abs(A[i]) % 7 == 0 && A[i] < 0) 
        { 
            if (A[i] > maxn)  
            { 
                maxn = A[i];  
                k = 0 + i + 1; 
            } 
                 
        } 
        cout << sumn << " " << maxn << " " << k << endl; 
    } 
    cout << "Сумма чисел, удовлетворяющих условиям: " << sumn << endl; 
    cout << "Наибольшее из чисел, удовлетворяющих условиям: " << maxn << endl; 
    cout << "Номер наибольшего из чисел, удовлетворяющих условиям: " << k; 
    delete(A); 
}

void Task_2()
{
	long N; 
    long result = 1; 
    cin >> N; 
    while (N > 0) 
    { 
        result *= (N % 10); 
        N = N / 10; 
    } 
    cout << result; 
}

int main()
{
	Task_1;
	Task_2;
}
