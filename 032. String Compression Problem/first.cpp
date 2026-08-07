#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 443 [leetcode]
        String Compression
    */

    class Solution
    {
    public:
        int compress(vector<char> &chars)
        {
            int idx = 0;
            int n = chars.size();

            for (int i = 0; i < n; i++)
            {
                char ch = chars[i];
                int count = 0;

                // Time Complexity: O(n) {since both for-while loop update same i}
                while (i < n && chars[i] == ch)
                {
                    count++, i++;
                }

                if (count == 1)
                {
                    chars[idx++] = ch;
                }
                else
                {
                    chars[idx++] = ch;
                    string str = to_string(count);
                    for (char charNum : str)
                    {
                        chars[idx++] = charNum;
                    }
                }
                i--;
            }

            chars.resize(idx);
            return idx;
        }
    };
    return 0;
}