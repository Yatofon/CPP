#include <iostream>

using namespace std;

int main() 
{
    int i;
    cout <<"Choose type of data:"<<endl<<"0: int"<<endl<<"1: unsigned int "<<endl<<"2: short"<<"3: unsigned short"<< endl;
    cout <<"4: long"<<endl<<"5: unsigned long"<<endl<<"6: long long"<<endl<<"7: unsigned long long"<<endl;
    cout <<"8: float"<<endl<<"9: double"<<endl<<"10: char"<<endl<<"11: bool"<<endl;
    cin >> i;
    
    switch (i)
    {
    case 0:
        cout <<"int - 4 bytes,  -2147483648 - 2147483647";
        break;
    case 1:
        cout <<"unsigned int - 4 bytes,  0 - 4294967295";
        break;
    case 2:
        cout <<"short - 2 bytes,  -32768 - 32767";
        break;
    case 3:
        cout <<"unsigned short - 2 bytes,  0 - 65535 ";
        break;
    case 4:
        cout <<"long - 4 bytes,  -2147483648 - 2147483647";
        break;
    case 5:
        cout <<"unsigned long - 4 bytes,  0 - 4294967295";
        break;
    case 6:
        cout <<"long long - 8 bytes,  -9223372036854775808 - 9223372036854775807";
        break;
    case 7:
        cout <<"unsigned long long - 8 bytes,  0 - 18446744073709551615";
        break;
    case 8:
        cout <<"float - 4 bytes,  1.17549e-38 - 3.40282e+38";
        break;
    case 9:
        cout <<"double - 8 bytes, 2.22507e-308 - 1.79769e+308";
        break;
    case 10:
        cout <<"char - 1 byte,  -128 - 127";
        break;
    case 11:
        cout <<"bool - 1 byte, 0 or 1 (false or true)";
        break;
    default:
        break;
    }
   return 0;
}