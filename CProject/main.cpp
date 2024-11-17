/*
                    Лабораторная работа №1
№1
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

using namespace std;

int main(void) 
{
    cout << "Типы данных: "  << endl;

    cout << "<data type> - <size>, <range>\n" << endl;
    
    cout << "int - 4 bytes,  -2147483648 - 2147483647"  << endl;
    cout << "unsigned int - 4 bytes,  0 - 4294967295"  << endl;
    cout << "short - 2 bytes,  -32768 - 32767"  << endl;
    cout << "unsigned short - 2 bytes,  0 - 65535 "  << endl;
    cout << "long - 4 bytes,  -2147483648 - 2147483647"  << endl;
    cout << "unsigned long - 4 bytes,  0 - 4294967295"  << endl;
    cout << "long long - 8 bytes,  -9223372036854775808 - 9223372036854775807"  << endl;
    cout << "unsigned long long - 8 bytes,  0 - 18446744073709551615"  << endl;
    cout << "float - 4 bytes,  1.17549e-38 - 3.40282e+38"  << endl;
    cout << "double - 8 bytes, 2.22507e-308 - 1.79769e+308"  << endl;
    cout << "char - 1 byte,  -128 - 127"  << endl;
    cout << "bool - 1 byte, 0 or 1 (false or true)"  << endl;

    cout << "Операции:" << endl;
    
    int intd1 = 117;
    int intd2 = 24;
    cout << "a = "<< intd1 << "\nb = "<< intd2 << endl;
    cout << "a - b = " << intd1 - intd2 << endl << endl; // 93

    unsigned int uintd1 = 102;
    unsigned int uintd2 = 134;
    cout << "a = "<< uintd1 << "\nb = "<< uintd2 << endl;
    cout << "a - b = " << uintd1 - uintd2 << endl << endl; // 4294967264

    long long lld1 = 94587216571385;
    long long lld2 = 3248213641;
    cout << "a = "<< lld1 << "\nb = "<< lld2 << endl;
    cout << "a % b = " << lld1 % lld2 << endl << endl; // 2483559106

    double dd1 = 157.351;
    double dd2 = 42.892;
    cout << "a = "<< dd1 << "\nb = "<< dd2 << endl;
    cout << "a % b = " << dd1 / dd2 << endl << endl; // 3.66854

    bool bd1 = true;
    bool bd2 = 0;
    cout << "a = "<< bd1 << "\nb = "<< bd2 << endl;
    cout << "a && b = " << bd1 && bd2; // 1

    char a = 'R';
    char b = 'v';
    cout << "\n\na = "<< a << "\nb = "<< b << endl;
    cout << "a * b = "<< a * b << endl;

}