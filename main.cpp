// Лабораторная работа № 4
#include <cmath>  
#include <iostream>  
#include <iomanip>  
 
using namespace std; 
 
void Task_1()
{
	long long a, b, c; 
    cin >> a >> b >> c; 
    if (a < b && b > c) cout << b + a - c; 
    else if (b % c == 0) cout <<b / c - b; 
    else cout << a * b - c; 
}

void Task_2()
{
    int N; 
    cin >> N; 
    switch(N) 
    { 
        case 1: 
            cout << "January"; break; 
        case 2: 
            cout << "February"; break; 
        case 3: 
            cout << "March"; break; 
        case 4: 
            cout << "April"; break; 
        case 5: 
            cout << "May"; break; 
        case 6: 
            cout << "June"; break; 
        case 7: 
            cout << "July"; break; 
        case 8: 
            cout << "August"; break; 
        case 9: 
            cout << "September"; break; 
        case 10: 
            cout << "October"; break; 
        case 11: 
            cout << "November"; break; 
        case 12: 
            cout << "December"; break; 
        default: 
            cout << "Число находится вне рабочего диапазона"; break;
    } 
}

void Task_3()
{
	short x; 
    cin >> x; 
    if (x == -1) cout << "Negative number"; else cout << "Positive number"; 
}

int main(void) 
{ 
    Task_1;
	//Task_2;
	//Task_3;
}

