#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    /*
        Problem: 131 [leetcode]
        Palindrome Partitioning
    */

    class Solution
    {
    public:
        bool isPalindrome(string s1)
        {
            string s2 = s1;

            reverse(s2.begin(), s2.end());

            return s1 == s2;
        }

        void getAllParts(string s, vector<vector<string>> &ans,
                         vector<string> &partitions)
        {
            if (s.length() == 0)
            {
                ans.push_back(partitions);
            }

            for (int i = 0; i < s.length(); i++)
            {
                string part = s.substr(0, i + 1); // i+1 = last part is not included

                if (isPalindrome(part))
                {
                    partitions.push_back(part);
                    getAllParts(s.substr(i + 1), ans, partitions);
                    partitions.pop_back(); // backtracking
                }
            }
        }

        vector<vector<string>> partition(string s)
        {
            // Time Complexity:
            /*
                we need "n" partition on string of size "n"

                and each time we have 2 options,
                exponential increment in each level

                and each level we are running "revese" algorithm
                to check if the current "part" is a palindrome or not
                that at a string of length "n" at each level

                therefore,
                TC = O(2^n *n)
            */

            vector<vector<string>> ans;
            vector<string> partitions;

            getAllParts(s, ans, partitions);

            return ans;
        }
    };

    return 0;
}