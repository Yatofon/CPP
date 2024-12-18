//Лабораторная работа №9

#include <iostream>

using namespace std;

int main()
{
	unsigned int n;
    cout << "Enter a number: ";
    cin >> n;
    unsigned int* n1 = &n;

    unsigned char* a = reinterpret_cast <unsigned char*>(n1);

    for (int i = 0; i < 33; i++) cout << static_cast <unsigned int>(*(a+i)) << "\n";
}
