#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Problem: 20 [leetcode]
        Valid Parentheses
    */

    class Solution
    {
    public:
        bool isValid(string s)
        {
            stack<char> st;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                {
                    st.push(s[i]);
                }
                else
                {
                    // cant pop in empty
                    if (st.size() == 0)
                    {
                        return false;
                    }
                    else if ((st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']') || (st.top() == '{' && s[i] == '}'))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            return st.size() == 0;
        }
    };

    return 0;
}