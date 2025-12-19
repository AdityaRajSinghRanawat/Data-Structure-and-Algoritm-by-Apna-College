#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Stack:
    stack<int> s;

    // push
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    // emplace
    s.emplace(5);

    
    // top
    cout << "Top element: " << s.top() << endl; // 5
    
    // pop
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // 4
    
    // Print Stack:-
    
    // Stack elements are printed in decending order
    // we can not see the elements of stack directly
    cout << "Stack: ";
    
    // empty
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    // swap
    stack<int> s1, s2;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    // size
    cout << "\nSize of s1 before swap: " << s1.size() << endl; // 4
    cout << "Size of s2 before swap: " << s2.size() << endl; // 0

    s2.swap(s1);
    cout << "Size of s1 after swap: " << s1.size() << endl; // 0
    cout << "Size of s2 after swap: " << s2.size() << endl; // 4
    
    
    return 0;
}