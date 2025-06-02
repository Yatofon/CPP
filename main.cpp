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

	for (int j = a; j < b; j++) 
	{	
		if (List[j] <= pivot)
		{
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
    //int List[10] = { 6, 19, 4, 12, 8, 3, 1, 15, 7, 10 };
    int List[11] = {14, 2, 17, 5, 9, 11, 6, 1, 13, 8, 3};
    int n = sizeof(List) / sizeof(List[0]);
    fast_sorting(List, 0, size(List) - 1, n);
    print_List(List, n);
}

void print_List(string** N, int n, int m)
{
	for (int i = 0; i < n; i++)
		{
		for (int j = 0; j < m; j++)
			cout << N[i][j] << " ";
		cout << "\n";
		}
}

size_t operator==(string* a, string* b)
{
	for (int i = 0; i < sizeof(a); i++)
	{
		if (a[i] == b[i]) continue;
		else (return false;)
	}
	return true;
}

string check(string** N, int n, int* start)
{
	switch (expression)
	{
	case constant expression:
		/* code */
		break;
	
	default:
		break;
	}
	
}

int find_end(string** N, int n, int m, int* start, int* end)
{
	if (start[0] == start[1] && start[0] == 0)
	{
		find_end(N, n, m, {start[0] + 1, start[1]}, end)
		find_end(N, n, m, {start[0], start[1] + 1}, end)
		find_end(N, n, m, {start[0] + 1, start[1] + 1}, end)
	}
	
  	
}

void Task_3()
{
	int m, n;
	int* start, end;
	cout << "Enter 2 <= M, N <= 100 (columns, rows): \n";
	cin >> m >> n;
	string** N = new string*[n];

	cout << "Fill in the fields\n's' - start\n'e' - end\n'.' - can go\n'#' - can't go\n";
	for (int i = 0; i < n; i++)
		N[i] = new string[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> N[i][j];
			if (N[i][j] == 's') start = {i, j};
			else if (N[i][j] == 'e') end = {i, j}
			


	print_List(N, n, m);

	//find_end(N, start, end, start, end);

	for (int i = 0; i < n; i++)
		delete[] N[i];
	delete[] N;
}

int main()
{
	//Task_1();
	//Task_2();
	Task_3();
}
