#include <iostream>

using namespace std;

void print_List(int List[], int n)
{
	for (int i = 0; i < n; i++)
		cout << List[i] << " ";
	cout << "\n";
}

void print_number(char* n, int k)
{
	if (k == 0)
		cout << n[k];
	else 
	{
		cout << n[k];
		print_number(n, k - 1);
	}
}

void Task_1()
{
	string N;
	cout << "Enter number N < 2^31: ";
	cin >> N;
	char* n = new char[N.length()];
	for (int i = 0; i < N.length(); i++)
		n[i] = N[i];
	
	print_number(n, N.length() - 1);
}

int partition(int* List, int a, int b, int n) {
    int pivot = List[b];
    int i = a - 1;

    for (int j = a; j < b; j++) {
        if (List[j] <= pivot) {
            i++;
            swap(List[i], List[j]);
        }
    }
    swap(List[i + 1], List[b]);
    return i + 1;
}

void fast_sorting(int* List, int a, int b, int n)
{
    if (a < b)
    {
        int pivot_index = partition(List, a, b, n);
        fast_sorting(List, a, pivot_index - 1, n);
        fast_sorting(List, pivot_index + 1, b, n);
    }
}

void Task_2()
{
	int List[10] = {6, 19, 4, 12, 8, 3, 1, 15, 7, 10};
	//int List[11] = {14, 2, 17, 5, 9, 11, 6, 1, 13, 8, 3};
	int n = sizeof(List)/sizeof(List[0]);
	fast_sorting(List, 0, size(List) - 1, n);
}

int main()
{
	//Task_1();
	Task_2();
}
