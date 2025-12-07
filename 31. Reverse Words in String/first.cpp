#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    /*
        Problem: 151 [leetcode]
        Reverse Words in a String
    */

    class Solution
    {
    public:
        string reverseWords(string s)
        {

            int n = s.length();
            reverse(s.begin(), s.end());

            string ans = "";

            // time complexity is O(n) because both the for-while loop update the same "i"
            for (int i = 0; i < n; i++)
            {
                string word = "";

                while (i < n && s[i] != ' ')
                {
                    word += s[i];
                    i++;
                }
                reverse(word.begin(), word.end());

                if (word.length() > 0)
                {
                    ans += " " + word;
                }
            }

            // output: _hello_world
            // to overcome this we will print from index = 1
            return ans.substr(1);
        }
    };
    return 0;
}