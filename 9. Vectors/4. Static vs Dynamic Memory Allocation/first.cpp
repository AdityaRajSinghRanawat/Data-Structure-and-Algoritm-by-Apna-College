#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    /*
        # Static vs Dynamic Memory Allocation:-
        
        Static:-
        - Memory is allocated at compile time.
        - array is created at compile time. e.g. arr[10]
        - of fixed size
        
        Dynamic:-
        - Memory is allocated at run time.
        - array is created at run time. e.g. arr = new int[n]
        - of variable size
    */

    /*
        vector<int> vec; // size = 0

        
        vec.push_back(0); // size = 1
        [ _ ]
        [ 0 ]


        vec.push_back(1); // size = 2
        // copy old data to new memory location and delete old memory
        [ _ ] (old) X 2 = [ _ , _ ] (new)
        [ 0 ] => [ 0, _ ] copy old data
        [0, _ ] => [ 0, 1 ] push new data



        vec.push_back(2); // size = 3, capacity = 4
        [ _ , _ ] (old) X 2 = [ _ , _ , _ , _ ] (new)
        [ 0, 1] => [ 0, 1, _ , _ ] copy old data
        [ 0, 1, _ , _ ] => [ 0, 1, 2, _ ] push new data

        push_back(3);
        push_back(4); // size = 5, capacity = 8
        [ _ , _ , _ , _ ] (old) X 2 = [ _ , _ , _ , _ , _ , _ , _ , _ ] (new)
        [ 0, 1, 2, 3] => [ 0, 1, 2, 3 , _ , _ , _ , _ ] copy old data
        [ 0, 1, 2, _3 , _ , _ , _ , _ ] => [ 0, 1, 2, 3, 4, _ , _ , _ ] push new data
    */

    /*
        # Size vs Capacity:-

        Size:-
        - Number of elements in vector.

        Capacity:-
        - Number of elements that can be stored.
    */

    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << vec.size() << endl; // 3
    cout << vec.capacity() << endl; // 4

    vec.push_back(3);
    vec.push_back(4);
    
    cout << vec.size() << endl; // 5
    cout << vec.capacity() << endl; // 8
    return 0;
}