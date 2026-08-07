#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Priority Queue: (Max-Heap by default)
    // Max Heap: The largest element is the root element
    // Min Heap: The smallest element is the root element

    // the highest priority element is at the top of the queue
    /*
        Internally a tree is formed but we visulalize it like a stack/array.
    */

    priority_queue<int> q;

    // push and emplace 
    q.push(5);
    q.push(3);
    q.push(6);
    q.emplace(2);
    q.emplace(1);

    // size
    cout << "Size: " << q.size() << endl;

    // pop => it removes the largest element i.e they are sorted when we pop
    // top
    // empty
    cout << "Element: ";
    while(!q.empty()){
        cout << q.top() << " "; 
        q.pop(); 
    }
    cout << endl;

    // if we want the priority to be smallest value
    priority_queue<int, vector<int>, greater<int>> pq;

    // greater<int> is called functor / we can imagine it as a comparator 
    // functor: it is a function object which we pass to do some work

    pq.push(5);
    pq.push(3);
    pq.push(6);
    pq.emplace(2);
    pq.emplace(1);

    cout << "Comparator (greater<int>) Element: ";
    while(!pq.empty()){
        cout << pq.top() << " "; 
        pq.pop(); 
    }
    cout << endl;

    // Time Complexity:
    // push() and pop() -> O(log n) => due to tree rebalancing
    // top()            -> O(1)

    return 0;
}