// Лабораторная работа №3
#include <cmath>  
#include <iostream>  
#include <iomanip>  
 
using namespace std; 
  
int main(void) 
{ 
    unsigned long long x, i; 
    cout << "Введите x, затем i" << endl; 
    cin >> x >> i; 
    cout << (( x & ( 1 << ( i - 1 ) ) ) >> ( i - 1) ); 
}