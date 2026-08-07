#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        [ 1 | 2 | 3 | 4 | 5 ] .........
          ^                    ^
          |                    |
        begin()               end()
    */



    // .begin() => give the first element in form of iterator

    vector<int> vec = {1, 2, 3, 4, 5};

    // Iterators aren't printable
    // vec.begin() 
    // will not work

    cout << "First element *(vec.begin()): " << *(vec.begin()) << endl; // value



    // .end() => gives the position of next space after the last element

    // gives random value or 0 (depending on compiler)
    cout << "Element at end() *(vec.end()): " << *(vec.end()) << endl;         
    cout << "Element at end() *(vec.end() - 1): " << *(vec.end() - 1) << endl; 




    /*
        .    ...... [ 1 | 2 | 3 | 4 | 5 ] 
        .       ^                     ^
        .       |                     |
        .    rend()                rbegin()
    */

    // .rbegin() => gives the last element in form of iterator
    cout << "Element at *(vec.rbegin()): " << *(vec.rbegin()) << endl;

    // .rend() => gives the position of next space before the first element
    cout << "Element at *(vec.rend()): " << *(vec.rend()) << endl;


    // we use the iterators for the loops

    vector<int>::iterator it; // its a pointer variable (to vec)
    // :: is the scope resolution operator
    // this tells that iterator is pointing to vector<int> type

    // forward
    cout << "Forward Traversal (using loop): ";
    for(it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl;



    vector<int>::reverse_iterator itr;
    
    // reverse
    cout << "Reverse Traversal (using loop): ";
    for(itr = vec.rbegin(); itr != vec.rend(); itr++){
        cout << *itr << " ";
    }
    cout << endl;

    // compact form
    cout << "Compact Forward Traversal: ";
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    // this is not developer friendly

    // modern C++ (C++11 and above) use "auto" keyword
    cout << "\nUsing auto keyword: ";
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }


    return 0;
}