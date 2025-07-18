#include <iostream>
using namespace std;

int main()
{
    /*
        # POINTER TO POINTER:-
        A pointer that stores the address of another pointer.

        example:-

        int a = 10;
        int *ptr1 = &a;
        int **ptr2 = &ptr1; // it stores the address of "ptr1"
    */

    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1; 

    cout << "Value of a: " << a << endl; // Value of "a"
    //
    cout << "Address of a: " << &a << endl; // Address of "a"
    cout << "Value of ptr1: " << ptr1 << endl; // Value of "ptr1" (address of "a")
    //
    cout << "Address of ptr1: " << &ptr1 << endl; // Address of "ptr1"
    cout << "Value of ptr2: " << ptr2 << endl; // Value of "ptr2" (address of "ptr1")
    //
    cout << "Address of ptr2: " << &ptr2 << endl; // Address of "ptr2"
    

    return 0;
}