#include <iostream>
using namespace std;

// Pass by Value
void changeA(int a)
{
    a = 20; // This will change the original variable in main()
    cout << "Inside changeA() a = " << a << endl;
}

// Pass by Reference using Pointer
void changeB(int *b)
{
    *b = 20; // This will change the original variable in main()
    cout << "Inside changeB() a = " << *b << endl;
}

// Pass by Reference using Reference
void changeC(int &d)
{
    // this "&" is not an address operator "Amperstand"
    // it is a alias operator in C++

    /*
        Example:
        int a = 10;
        int &b = a; // b is an alias for a, both refer to the same memory location

        Alias:
        In programming (especially C++),
        an alias means another name for the same thing.

        It does not create a copy,
        it just creates a new label for the same memory location
    */
    d = 20; // This will change the original variable in main()
    cout << "Inside changeB() a = " << d << endl;
}

int main()
{
    // Pass by Reference
    /*
        Parameters:-
        1. Pass by Value
        2. Pass by Reference





        1. Pass by Value:
        - A copy of the variable is passed to the function.
        ------------------------------------------------------------------
        main()                                changeA()
        a = 10 (addr: 100)                    a = 10 (addr: 200) [copy]
        ------------------------------------------------------------------



        2. Pass by Reference:

        1) Pointer

        ------------------------------------------------------------------
        main()                                changeA()
        a = 10 (addr: 100)                    &a (addr: 100) [original]
        ------------------------------------------------------------------


        
        2) Reference (Alias)
        // Both a and b are talking about same location 100
        ------------------------------------------------------------------
        main()                                changeA()
        a = 10 (addr: 100)                    b (addr: 100) [original]
        ------------------------------------------------------------------


    */

    // Pass by Value:
    int a = 10;
    cout << "Inside main() before changeA() a = " << a << endl;
    changeA(a);
    cout << "Inside main() after changeA() a = " << a << endl;
    cout << endl;

    // Pass by Reference:
    // 1) Pointer
    int b = 10;
    cout << "Inside main() before changeB() b = " << b << endl;
    changeB(&b);
    cout << "Inside main() after changeB() b = " << b << endl;
    cout << endl;

    // 2) Reference (Alias)
    int c = 10;
    cout << "Inside main() before changeC() c = " << c << endl;
    changeC(c);
    cout << "Inside main() after changeC() c = " << c << endl;
    cout << endl;

    // in the privious question or in leetcode boiler-plate we see
    // vector<int> productExceptSelf(vector<int> &nums)
    // this nums is a another name for original variable
    // any change made to this will be reflected to original variable as well

    return 0;
}