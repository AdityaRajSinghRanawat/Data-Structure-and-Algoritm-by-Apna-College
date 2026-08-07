#include <iostream>
#include <cstring> // for strlen
#include <string>
#include <algorithm> // for reverse()

#include <vector>

using namespace std;

int main()
{
    /*
        Problem: 344 [leetcode]
        Reverse a string
    */

    /*
        class Solution
        {
        public:
            void reverseString(vector<char> &s)
            {
                int st = 0, end = s.size() - 1;

                while (st < end)
                {
                    swap(s[st++], s[end--]); // short method
                }
            }
        };
    */

    // Reverse a string:-

    // 1. Character array method

    // charStr = ['H', 'e', 'l', 'l', 'o', '\0']
    //             0    1    2    3    4     5    n = 5
    //             ^                   ^
    //             |                   |
    //            i = 0             i = n - 1 = 4
    char charStr[] = "Hello World";

    int n = strlen(charStr); // excluding null terminator
    int Start = 0, End = n - 1;
    while (Start < End)
    {
        swap(charStr[Start], charStr[End]);
        Start++;
        End--;
    }

    cout << "Reversed string (char array method): " << charStr << endl;




    // 2. String STL method
    string stringBasic = "Hello World";
    int st = 0;
    int end = stringBasic.size() - 1; // .size() and .length() both are same
    while (st < end)
    {
        swap(stringBasic[st], stringBasic[end]);
        st++;
        end--;
    }
    cout << "Reversed string (string Basic method): " << stringBasic << endl;


    // using in-built reverse() method from <algorithm> library
    string stringSTL = "Hello World";
    reverse(stringSTL.begin(), stringSTL.end()); // returns iterators
    cout << "Reversed string (string STL method): " << stringSTL << endl;
    return 0;
}