#include <iostream>
using namespace std;

int main()
{
    /*
        int a = 10;

        Store in Memory:-

        --------------------------------
        |  | 10 |                      |
        |     a                        |
        --------------------------------
        .   ^
        .   |
        . address (hexadecimal) = 0x7ffeefbff5ac

        binary = 0-1 [2]
        decimal = 0-9 [10]
        hexadecimal = 0-9, A-F [16]




        char ch = 'A';

        Store in Memory:-

        ----------------------------------
        |  | 10 |         |  A   |       |
        |     a             ch           |
        ----------------------------------
        .   ^               ^
        .   |               |
        .   |               |
        .   |           address = 0x100f
        . address = 0x36a6
    */

    /*
        Address of Operator (&) - gives the address of a variable

        &a  = 0x36a6
        &ch = 0x100f
    */

    int a = 10;
    cout << "Address of a: " << &a << endl;

    return 0;
}