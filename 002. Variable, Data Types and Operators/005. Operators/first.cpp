#include <iostream>
using namespace std;

int main()
{
    // 1. ARITHMETIC (+,-,*,/,%):


    cout << "ARITHMETIC OPERATORS" << endl;

    int a = 10, b = 5;
    int sum = a + b;
    cout << "Sum is : " << sum << endl;

    // OR
    cout << "Sum is : " << (a+b) << endl;
    cout << "Difference is : " << (a-b) << endl;
    cout << "Product is : " << (a*b) << endl;
    cout << "Division is : " << (a/b) << endl;
    cout << "Modulo is : " << (a%b) << endl;


    // concepts on division
    cout << "5/2 is : " << (5/2) << endl; // not 2.5 but 2
    cout << "10/3 is : " << (10/3) << endl; // not 3.33 but 3

    // reason: int/int = int

    /*
        for decimal:

        float/int = float
        doube/int = double

        or vice versa:
        int/float = float
        int/doube = double
    */

   float f = 100;
   double d = 20;
   int i = 3;

   cout << "float/int is : " << (f/i) << endl;
   cout << "double/int is : " << (d/i) << endl;

   /*
        as you can see while rounding off 
        33.3333 only four decimal places are used
        But for,
        6.66667 five decimal places are used with 7 at last
   */


    cout << "double/int is : " << (5 / (double)2) << endl; // using typecasting



    // if you store this double answer in a variable of int type, then the answer will be int (not double)
    // because when you will store 2.5 in a small container then definately the decimal points will be removed out

    int ans = (5 / (double)2);
    cout << "double stored in int : " << ans << endl;

    
    














    // 2. RELATIONAL OPERATOR (<, <=, >, >=, ==, !=):

    cout << "RELATIONAL OPERATORS" << endl;

    cout << (3<5) << endl; // true -> 1
    cout << (3<=5) << endl; // true -> 1
    cout << (3>5) << endl; // false -> 0
    cout << (3>=5) << endl; // false -> 0
    cout << (3==5) << endl; // false -> 0
    cout << (3!=5) << endl; // true -> 1














    // 3. LOGICAL OPERATOR
    /* 
        || (OR)      ( | -> Pipe operator , || -> Double pipe) 
        && (AND)     ( & -> Ampersand)
        ! (NOT)
    */
    cout << "LOGICAL OPERATORS" << endl;

    cout << ( (1>3) || (3<5) ) << endl; // true -> 1
    cout << ( (1>3) && (3<5) ) << endl; // false -> 0
    cout << !(1>3) << endl; // true -> 1



    return 0;
}