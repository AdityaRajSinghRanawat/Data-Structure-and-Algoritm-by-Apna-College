#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return (a + b);
}

int abc(int a, int b)
{
    a = a + 10;
    b = b + 10;
    return (a + b);
}

int changeX(int x){
    x = x*2;
    cout << "x = " << x << endl;
    return 0;
}

int main()
{
    // PASS BY VALUE
    // copy of argument is passed to function

    int x = 5, y = 4;
    cout << sum(x, y) << endl;

    // here the output is correct but we specially want to see how memory works

    /*

        MAIN FUNCTION:
        (x = 5, y = 4)

        memory --> [ x = 5       y = 4] // we stored it


        SUM FUNCTION:
        (a, b) -> (a = 5, b = 4) // due to arguments

        memory --> [ a = 5       b = 4] // automatically stores it





        whether we have used our old varibles, but its copy is made in the new function
    */









    int a = 5, b = 4;
    cout << sum(a, b) << endl;

    // here these a & b in main and sum function are different

    /*

        MAIN FUNCTION:
        (a = 5, b = 4)

        memory --> [ a = 5       b = 4] // we stored it


        SUM FUNCTION:
        (a, b) -> (a = 5, b = 4) // due to arguments

        memory --> [ a = 5       b = 4] // automatically stores it


        but both these memory a & b are different
    */













    a = 5, b = 4; // we can also write it like this
    cout << abc(a, b) << endl;
    cout << a << " " << b << endl;

    // even if we increase our value of a & b in abc function 
    // then also our main function's a & b will not be affected

    /*

        MAIN FUNCTION:
        (a = 5, b = 4)

        memory --> [ a = 5       b = 4] // we stored it


        ABC FUNCTION:
        (a, b) -> (a = 5, b = 4) // due to arguments
        a = 5 + 10 = 15
        b = 4 + 10 = 14

        memory --> [ a = 5       b = 4] // automatically stores it
        memory --> [ a = 15     b = 14] // updated memory


        but both these memory a & b are different
    */





















   // two ways of parsing a value
   // 1. parse by value
   // 2. parse by reference (will study in pointers) [vector, link list, stack]








    x = 5;
    changeX(x);
    cout << "x = " << x << endl;


    /*

        MAIN FUNCTION:
        (x = 5)

        memory --> [       x = 5 {at address: 100}       ] // we stored it


        changeX FUNCTION:
        (x) -> (x = 5)     // due to arguments
        x = 2*x = 1*5 = 10

        memory --> [ x = 5   {at address: 555}   ] // automatically stores it
        memory --> [ a = 10  {at address: 555}   ] // updated memory


        but both these memory x & x are different
    */






    return 0;
}