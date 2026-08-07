#include <bits/stdc++.h>
using namespace std;

class Stack
{
    list<int> ll;

public:
    // O(1)
    void push(int val)
    {
        ll.push_front(val);
    }

    // O(1)
    void pop()
    {
        ll.pop_front();
    }

    // O(1)
    int top()
    {
        return ll.front();
    }

    bool empty()
    {
        return ll.empty(); // ll.size() == 0
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();
    s.push(4);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}