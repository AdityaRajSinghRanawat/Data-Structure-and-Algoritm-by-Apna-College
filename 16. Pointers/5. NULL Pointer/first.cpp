#include <iostream>
using namespace std;

int main()
{
    /*
        # NULL POINTER:
        A pointer that does not point to any location.

        We can not dereference a NULL pointer.
        Because it does not point to any valid location
    */

    /*  
        if we do not give pointer a varible 
        then it stores a garbage value / random address
    */

    int *ptr;
    cout << ptr << endl; // garbage value

    int *nullPtr = NULL; // NULL pointer
    cout << nullPtr << endl; // 0x0
    cout << *nullPtr << endl;

    // we can not dereference a NULL pointer
    // Error: segmentation fault
    // since its not pointing at a valid memory location


    return 0;
}