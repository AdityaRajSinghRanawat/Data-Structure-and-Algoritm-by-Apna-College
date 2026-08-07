#include <iostream>

using namespace std;

int main()
{
    /*
        Problem: 567 [leetcode]
        Permutation in String
    */

    class Solution
    {
    public:
        bool isFreqSame(int windowFreq[], int freq[])
        {
            for (int i = 0; i < 26; i++)
            {
                if (windowFreq[i] != freq[i])
                {
                    return false;
                }
            }
            return true;
        }
        bool checkInclusion(string s1, string s2)
        {
            // pattern
            int freq[26] = {0};
            for (int i = 0; i < s1.length(); i++)
            {
                freq[s1[i] - 'a']++;
            }

            // big array
            int windowSize = s1.length();
            for (int i = 0; i < s2.length(); i++)
            {
                int windowFreq[26] = {0};
                int windowIdx = 0, currentIdx = i;
                while (windowIdx < windowSize && currentIdx < s2.length())
                {
                    windowFreq[s2[currentIdx] - 'a']++;
                    windowIdx++, currentIdx++;
                }

                if (isFreqSame(windowFreq, freq))
                {
                    return true;
                }
            }

            return false;
        }
    };
    return 0;
}