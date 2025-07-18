#include <iostream>
using namespace std;

int main()
{
    /*
        # Dereference Operator (*):
        Value at address

        example:-
        *(&a) === *(0x61ff0c) === 10

    */

    int a = 10;
    int value1 = *(&a); 

    //or

    int *pointer = &a;
    int value2 = *(pointer); // *(pointer) === *(&a)

    cout << "Value of a: " << a << endl;
    cout << "Value of *(&a): " << value1 << endl; 
    cout << "Value of *(pointer): " << value2 << endl; 
    cout << endl;


    int b = 20;
    int *ptr = &b;
    int **parPtr = &ptr;

    cout << "Value of (ptr): " << (ptr) << endl;
    cout << "Value of *(&parPtr): " << *(parPtr) << endl;
    /*
        b[addr = 300] = 20
        ptr[addr = 500] = 300
        parPtr[addr = 700] = 500

        *(parPtr) = *(500) = *(addr of ptr) = 300
        *(*(parPtr)) = *(300) = *(addr of b) = 20
    */
    cout << "Value of **(parPtr): " << **(parPtr) << endl;

    
    return 0;
}