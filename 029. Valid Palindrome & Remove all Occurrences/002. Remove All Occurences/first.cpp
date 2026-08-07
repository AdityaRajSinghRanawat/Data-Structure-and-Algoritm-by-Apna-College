#include <iostream>

using namespace std;

int main()
{
    /*
        Problem: 1910 [leetcode]
        Remove All Occurrences of a Substring
    */

    class Solution
    {
    public:
        string removeOccurrences(string s, string part)
        {
            while (s.length() > 0 && s.find(part) <= s.length())
            {
                s.erase(s.find(part), part.length());
            }
            return s;
        }
    };

    return 0;
}