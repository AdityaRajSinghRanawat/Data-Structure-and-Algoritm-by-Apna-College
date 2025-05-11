#include <iostream>
using namespace std;

int changeArr(int arr[], int size)
{
    cout << "Inside Function:-" << endl;
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2; // change the value of arr[i] to arr[i] * 2
        cout << arr[i]<< endl;
    }
}

int main()
{
    /*
        Pass by VALUE:-
        main(){
            x = 10;
        }
        function changeX{
            {{{ x = 10; // make seperate copy of x in this function }}}
            x=20; // changes x to 20 || do not change x in main()
        }

        Pass by REFERENCE:-

        In C++ a reference is an alternative name for an object or function,
        and its address is the address of the object or function it refers to.
        For sake of understanding we are calling it address here.

        main(){
            x = 10;
        }
        function changeX{
            x=20; // changes x to 20 || change x = 20 in main()
        }
    */

    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    changeArr(arr, size); // pass by reference
    cout << "Inside Main:-" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    // we might be thinking this should be 10, 20, 30, 40, 50 but it is not.
    /*
        Array are non-primitive (not simple) data type 
        and BY DEFAULT they are passed by reference.
        
        Array varible itself is a pointer.
        i.e. int arr[5] = {10, 20, 30, 40, 50};
        arr = 100 (pointer => location: 100)
        
        main():-
        --------------------------
        | 10 | 20 | 30 | 40 | 50 | 
        --------------------------
        . 100  104  108  112  116 
        .  ^
        .  |
        . arr
        
        changeArr():-
        arr = 100
        change value at address 100, this change main()
       
        i.e. we pass address of the first element of the array to the function.
        i.e. we make changes to ORIGINAL data/array
    */
    return 0;
}