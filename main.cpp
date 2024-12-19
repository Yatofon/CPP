/*
                    Лабораторная работа №1
№ 1
    Переменная – это именованная область оперативной памяти, в которой хранятся данные определенного типа. 
    Переменная позволяет хранить, изменять и использовать данные в программе.
№№ 2, 3, 4
    Основные типы данных C++
        Целочисленные
        Знаковые
            int – 4 байта, от -2147483648 до 2147483647
            short –2 байта, от -32768 до 32767
            long – 4 байта, от -2147483648 до 2147483647
            long long – 8 байт, от -9223372036854775808 до 9223372036854775807
        Беззнаковые
            unsigned int – 4 байта, от 0 до 4294967295
            unsigned short –2 байта, от 0 до 65535 
            unsigned long – 4 байта, от 0 до 4294967295
            unsigned long long – 8 байт, от 0 до 18446744073709551615
        Вещественные
            float – 4 байта, от 1.17549e-38 до 3.40282e+38
            double – 8 байт, от 2.22507e-308 до 1.79769e+308
        Символьные
            char – 1 байт, от -128 до 127
        Логические
            bool – 1 байт, 0 или 1 (false или true)
*/

#include <iostream>
#include <climits>

using namespace std;

int main(void) 
{
    // № 5
    cout << "Типы данных: "  << "\n";

    cout << "<data type> - <size>, <range>\n" << "\n";
    
    cout << "int - " << sizeof(int) << ", " << INT_MIN << " - " << INT_MAX << "\n";
    cout << "unsigned int - " << sizeof(unsigned int) << ", 0 - " << UINT_MAX  << "\n";
    cout << "short - " << sizeof(short) << ", " << SHRT_MIN << " - " << SHRT_MAX  << "\n";
    cout << "unsigned short - " << sizeof(unsigned short) << ", 0 - " << USHRT_MAX  << "\n";
    cout << "long - " << sizeof(long) << ", " << LONG_MIN << " - " << LONG_MAX  << "\n";
    cout << "unsigned long - "<< sizeof(unsigned long) << ", 0 - " << ULONG_MAX  << "\n";
    cout << "long long - " << sizeof(long long) << ", " << LLONG_MIN << " - " << LLONG_MAX  << "\n";
    cout << "unsigned long long - " << sizeof(unsigned long long) << ", 0 - " << ULLONG_MAX  << "\n";
    cout << "float - " << sizeof(float) << ", " << FLT_MIN << " - " << FLT_MAX  << "\n";
    cout << "double - " << sizeof(double) << ", " << DBL_MIN << " - " << DBL_MAX  << "\n";
    cout << "char - " << sizeof(char) << ", " << CHAR_MIN << " - " << CHAR_MAX  << "\n";
    cout << "bool - " << sizeof(bool) << ", 0 - 1"  << "\n";

    // № 6

    cout << "Операции:" << "\n";
    
    int intd1 = 117;
    int intd2 = 24;
    cout << "a = "<< intd1 << "\nb = "<< intd2 << "\n";
    cout << "a - b = " << intd1 - intd2 << "\n" << "\n"; // 93

    unsigned int uintd1 = 102;
    unsigned int uintd2 = 134;
    cout << "a = "<< uintd1 << "\nb = "<< uintd2 << "\n";
    cout << "a - b = " << uintd1 - uintd2 << "\n" << "\n"; // 4294967264

    long long lld1 = 94587216571385;
    long long lld2 = 3248213641;
    cout << "a = "<< lld1 << "\nb = "<< lld2 << "\n";
    cout << "a % b = " << lld1 % lld2 << "\n" << "\n"; // 2483559106, щас гляну как будет работать если я во второй вторую лаьу

    double dd1 = 157.351;
    double dd2 = 42.892;
    cout << "a = "<< dd1 << "\nb = "<< dd2 << "\n";
    cout << "a % b = " << dd1 / dd2 << "\n" << "\n"; // 3.66854

    bool bd1 = true;
    bool bd2 = 0;
    cout << "a = "<< bd1 << "\nb = "<< bd2 << "\n";
    cout << "a && b = " << bd1 && bd2; // 1

    char a = 'R';
    char b = 'v';
    cout << "\n\na = "<< a << "\nb = "<< b << "\n";
    cout << "a * b = "<< a * b << "\n";

}
