#include <iostream>
#include<deque>
using namespace std;

int main()
{
    // Deque: Double Ended Queue
    deque<int> d = {1, 2, 3};

    // push_back and push_front
    d.push_back(4);
    d.push_front(5);

    cout << "push_back and push_front: ";
    for(int val : d){
        cout << val << " ";
    }
    cout << endl;

    cout << "Element at index 2: " << d[2] << endl;

    // emplace_back and emplace_front
    // pop_back and pop_front

    // size, erase, clear, begin, end, rbegin, rend, insert, front, back => work same as vector
    
    // List vs Deque:
    /*
        List:
        - Doubly linked list (No random access)
        e.g. l[2] = not possible
        
        Deque:
        - Dynamic arrays (so random access is possible)
        e.g. d[2] = possible
    */
    return 0;
}