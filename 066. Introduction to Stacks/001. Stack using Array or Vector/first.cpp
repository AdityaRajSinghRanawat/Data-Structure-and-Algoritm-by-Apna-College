#include <bits/stdc++.h>
using namespace std;

class Stack
{
    vector<int> v;

public:
    // O(1)
    void push(int val)
    {
        v.push_back(val);
    }

    // O(1)
    void pop()
    {
        v.pop_back();
    }

    // O(1)
    int top()
    {
        return v[v.size() - 1];
    }

    bool empty()
    {
        return v.size() == 0;
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