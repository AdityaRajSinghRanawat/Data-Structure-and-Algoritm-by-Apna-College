#include <iostream>
using namespace std;

int main()
{
    /*
        # POINTERS:-
        Special variable that stores the address of another variable.

        syntax:-
        data_type *pointer_variable_name;
        or 
        data_type* pointer_variable_name
        
        example:-
        int *ptr;
        or 
        int* ptr;
    */

    int a = 10;
    int *ptr = &a; // "ptr" is a pointer variable that stores the address of "a"
    cout << "Address of a: " << &a << endl; // Address of "a"
    cout << "Address of p: " << &ptr<< endl; // Address of "ptr"
    cout << "Address of p: " << ptr<< endl; // "ptr" stores the address of "a"

    /*
        ---------------------------------------
        |  | 10 |          | 0x61ff0c |       |
        |     a                ptr            |
        |  0x61ff0c          0x61ff08         |
        ---------------------------------------
    */

    
    return 0;
}