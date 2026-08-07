#include <iostream>
#include <cstring> // for strlen
#include <string>
#include <algorithm> // for reverse()

#include <vector>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string to check palindrome: ";
    getline(cin, str);
    string reverseStr = str;
    reverse(reverseStr.begin(), reverseStr.end());
    if (str == reverseStr)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}