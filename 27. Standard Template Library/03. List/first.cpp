#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;

    // push_back() and push_front()
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);

    cout << "push_back() and push_front(): ";
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;



    // emplace_back() and emplace_front()
    l.emplace_back(6);
    l.emplace_back(7);
    l.emplace_front(8);
    l.emplace_front(9);

    cout << "emplace_back() and emplace_front(): ";
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;


    // pop_back() and pop_front()

    l.pop_back();
    l.pop_back();
    l.pop_front();

    cout << "pop_back() and pop_front(): ";
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;

    // size, erase, clear, begin, end, rbegin, rend, insert, front, back => work same as vector

    // list initialization
    list<int> l2 = {10, 20, 30, 40, 50}; 
    
    cout << "List l2: ";
    for(int val: l2){
        cout << val << " ";
    }
    cout << endl;


    // Difference between list and vector
    /*
        Vector: 
        - implemented as dynamic array
        - elements are stored in contiguous memory locations
        - allows random access using index
        - Insertion and deletion at the end is efficient
        - Insertion and deletion at the beginning or middle is inefficient (requires shifting of elements)
    
        List:
        - implemented as doubly linked list
        - therefore the front and back operations are available
        - elements are not stored in contiguous memory locations
        - does not allow random access using index (no indexing)
        - Insertion and deletion at both the beginning and end is efficient
        - Insertion and deletion in the middle is also efficient (no shifting of elements)
    */
    return 0;
}