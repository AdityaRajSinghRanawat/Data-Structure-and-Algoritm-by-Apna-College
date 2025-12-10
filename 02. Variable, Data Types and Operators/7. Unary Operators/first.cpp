#include <iostream>
using namespace std;

int main()
{
    // Bnary Operators:
    /*
        need two numbers to perform a operation
        a+b
        a-b
        a/b
        a*b
    */

    // Unary Operators:
    /*
        need ony one numbers to perform a operation
        or
        need only ne operand to perform a opration

        increment ++  
        decrement -- 


        a++ post increment operator
        ++a pre increment operator

        a-- post decrement operator
        --a pre decrement operator
    */

    int a = 10;
    cout << a++ << endl;

    int b = 10;
    cout << ++b << endl;

    int c = 10;
    cout << c-- << endl;

    int d = 10;
    cout << --d << endl;

    cout << endl;

    int x = 10;
    int y = x++; // store then update

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    int p = 10;
    int q = ++p; // update then store

    cout << "p = " << p << endl;
    cout << "q = " << q << endl; 


    return 0;
}