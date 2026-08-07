#include <iostream>
using namespace std;

int main()
{
    // the array variable is a pointer and its pointing to
    // first memory location of array i.e. index 0
    
    int arr[] = {1, 2, 3, 4, 5};
    cout << "arr = " << arr << endl; // pointer (addr index 0)
    cout << "*arr = " << *arr << endl; // value of addr index 0

    // array pointer are constant pointers, 
    // which cant be changed

    // normal pointer:
    int a = 10, b = 20; 
    int *ptr = &a;
    ptr = &b; // this is allowed, ptr can point to b now (changed)

    // array pointer:
    int c = 100;

    // compiler error: expression must be a modifiable lvalue
    // arr = &c;

    // modifiable lvalue:
    // the value in left is not modifiable

    // this is done because the arr varible is storing the values
    // {1, 2, 3, 4, 5}

    // if we change the pointer to point to some other variable
    // then what will happen to the values in the array!
    return 0;
}