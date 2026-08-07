#include <iostream>
using namespace std;

int main()
{
    // Pointer Arithmetic:

    // Increment(++) and Decrement(--):

    /*
        1) Increment (++p or p++):

        int a = 10;     [addr: 100]
        int *p = &a;

        // it will increase the value of address by datatype size

        // here "a" is a 4 byte integer
        p++;

        cout << p << endl; // 100 address + 4 byte = 104 address
    */

    //int
    int *a;
    cout << "a =" << a << endl;
    a++;
    cout << "a++ =" << a << endl;
    a++;
    cout << "a++ =" << a << endl;


    // OR

    // array
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    p++;
    cout << *p << endl;
    p++;
    cout << *p << endl;


    /*
        2) Decrement (--p or p--):

        int a = 10;     [addr: 100]
        int *p = &a;

        // here "a" is a 4 byte integer
        p--;

        cout << p << endl; // 100 address - 4 byte = 96 address
    */

    // int
    int b  = 10; 
    int *q = &b;
    cout << "q before decrement = " << q << endl; 
    q--;
    cout << "q after decrement = " << q << endl;


    // Add and Subtract Number:

    /*
        1) Add Number (p + n or p + 4):

        int a = 10;     [addr: 100]
        int *p = &a;

        // it will increase the value of address by datatype size * n

        // "+ 1" mean we add it by 1 integer size
        p = p + 1;

        // "+ 2" mean we add it by 2 integer size
        p = p + 2;
    */

    //int
    int *c;
    cout << "c = " << c << endl;
    c = c + 1;
    cout << "c + 1 = " << c << endl; // addr + 4
    c = c + 2;
    cout << "c + 2 = " << c << endl; // addr + 8

    // array
    // {1, 2, 3, 4, 5};
    int *r = arr;
    cout << "r before addition = " << *r << endl; // index 0
    r = r + 1;
    cout << "r after + 1 = " << *r << endl; // index 1
    r = r + 2;
    cout << "r after + 2 = " << *r << endl; // index 3

    // OR

    // {1, 2, 3, 4, 5};
    cout << "*arr = " << *arr << endl; // index 0
    cout << "*(arr + 1) = " << *(arr+1) << endl; // index 1
    cout << "*(arr + 2) = " << *(arr+2) << endl; // index 2
    cout << "*(arr + 3) = " << *(arr+3) << endl; // index 3
    cout << "*(arr + 4) = " << *(arr+4) << endl; // index 4

    /*
        2) Subtract Number (p - n or p - 4):

        int a = 10;     [addr: 100]
        int *p = &a;

        // it will decrease the value of address by datatype size * n

        // "- 1" mean we subtract it by 1 integer size
        p = p - 1;

        // "- 2" mean we subtract it by 2 integer size
        p = p - 2;
    */

    // {1, 2, 3, 4, 5};
    int *s = arr + 4; // pointing to index 4
    cout << "*s = " << *s << endl; // index 4
    cout << "*(s - 1) = " << *(s - 1) << endl; // index 3
    cout << "*(s - 2) = " << *(s - 2) << endl; // index 2
    cout << "*(s - 3) = " << *(s - 3) << endl; // index 1
    cout << "*(s - 4) = " << *(s - 4) << endl; // index 0

    





    // Working with Pointers:

    // In c++ it is not allowed to add two pointers
    // but we can subtract two pointers

    // ptr1 + ptr2 (is not allowed)
    // ptr1 - ptr2 (is allowed) [if they are of same datatype]




    // Subtract Ptr:
    /*
        ptr1[int] - ptr 2[int]

        ptr1 [addr 108] - ptr2 [addr 100]
        = number of blocks of type int between them

        108 - 100 = 8
        8 / sizeof(int) = 8 / 4 = 2 blocks of type int

        i.e 2 blocks of int can be placed between 
        addr 100 and addr 108
    */

    int *ptr1; // addr 100
    int *ptr2 = ptr1 + 2; // addr 108
    
    cout << "ptr1 = " << ptr1 << endl; // addr 100
    cout << "ptr2 = " << ptr2 << endl; // addr 108

    cout << "Difference = " << ptr2 - ptr1 << endl; // 2 blocks of int





    // Compare Pointer (<, >, <=, >=, ==, !=, ==):
    
    int *ptr01;
    int *ptr02;

    cout << "ptr01 = " << ptr01 << endl; // addr 100
    cout << "ptr02 = " << ptr02 << endl; // addr 108

    // 1 (true) or 0 (false)
    cout << "ptr01 < ptr02: " << (ptr01 < ptr02) << endl;
    cout << "ptr01 > ptr02: " << (ptr01 > ptr02) << endl;
    cout << "ptr01 <= ptr02: " << (ptr01 <= ptr02) << endl;
    cout << "ptr01 >= ptr02: " << (ptr01 >= ptr02) << endl;
    cout << "ptr01 != ptr02: " << (ptr01 != ptr02) << endl;
    cout << "ptr01 == ptr02: " << (ptr01 == ptr02) << endl;


    return 0;
}