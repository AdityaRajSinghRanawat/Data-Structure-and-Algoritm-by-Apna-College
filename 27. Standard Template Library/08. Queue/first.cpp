#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Queue: FIFO (First In First Out)
    
    queue<int> q;

    // push and emplace
    q.push(1);
    q.emplace(2);
    q.push(3);
    q.emplace(4);

    // front
    cout << "Front element: " << q.front() << endl;

    // back
    cout << "Back element: " << q.back() << endl; 

    // pop
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;

    // empty
    cout << "Queue elements: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // size
    cout << "Size: " << q.size() << endl; 

    // swap
    queue<int> q1, q2;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);

    cout << "Size of q1 before swap: " << q1.size() << endl; // 4
    cout << "Size of q2 before swap: " << q2.size() << endl; // 0

    q2.swap(q1);
    cout << "Size of q1 after swap: " << q1.size() << endl; // 0
    cout << "Size of q2 after swap: " << q2.size() << endl; // 4


    return 0;
}