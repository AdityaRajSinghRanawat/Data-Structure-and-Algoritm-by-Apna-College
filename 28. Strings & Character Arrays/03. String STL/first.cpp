#include <iostream>

#include <string> // optional (already included in iostream)

#include <limits> // for ignore()

using namespace std;

int main()
{
    char strLengthLoop[] = "Hello World";
    int len = 0;

    for (int i = 0; strLengthLoop[i] != '\0'; i++)
    {
        len++;
    }

    // space included
    cout << "Length calculated with loop: " << len << endl;


    


    // String STL

    /*
        Note:-

        #include<iostream>

        it is suffient since in this library the string library is already included

        But we use:
        #include<iostream>
        #include<string> 
        
        for better understanding
    */

    // #include <string>
    /*
        This library contains its a class named as "string"
        Then we make its object
        They have a large set methods and properties which help us 
    */

    // syntax: obj class = "string/calling constructor";

    string str = "Hello World";
    // .length() = method of object 
    cout << "Length using string STL: " << str.length() << endl; // space included

    // string are dynamic in size = runtime resizable

    str = "Bye World";
    cout << "New string: " << str << endl << endl;

    // this was not possible with char array
    // char str[20] = "Hello World";
    // str = "Bye World"; // error: expression must be a modifiable lvalue

    // To add strings:
    string str1 = "Hello ";;
    string str2 = "World";
    string str3 = str1 + str2;
    cout << "Concatenated string: " << str3 << endl;

    // To compare strings:
    string s1 = "Apple";
    string s2 = "Mango";
    string s3 = "Apple";
    cout << (s1 == s2) << endl; // 0 because false
    cout << (s1 == s3) << endl; // 1 because true

    // Compare from starting position:
    cout << (s1 < s2) << endl << endl; // 1 because A comes before M in lexicographical order










    // Input:
    // this method will not work since "cin" stops taking input after space
    string inputStr;
    cout << "Enter a string (cin): ";
    cin >> inputStr; 
    cout << "You entered (cin): " << inputStr << endl << endl;
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // to empty leftover input buffer
    // Input: Hello World  
    // Output: Hello

    // use getline() method to take input with spaces
    string getLineStr;
    cout << "Enter a string (getline): ";
    getline(cin, getLineStr);
    cout << "Get Line String: " << getLineStr << endl << endl;








    // print each character of string in new line
    cout << "Each character in new line (c : getLineStr method): " << endl;
    for(char c : getLineStr){
        cout << c << " ";
    }
    cout << endl;

    // or
    cout << "Each character in new line (.length method): " << endl;
    for(int i = 0; i < getLineStr.length(); i++){
        cout << getLineStr[i] << " ";
    }

    return 0;
}