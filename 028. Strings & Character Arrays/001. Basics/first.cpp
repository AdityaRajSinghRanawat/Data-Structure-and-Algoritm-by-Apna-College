#include <iostream>
#include <cstring> // for strlen

using namespace std;

int main()
{
    char str[] = {'a', 'b', 'c', 'd'};
    int arr[] = {1, 2, 3, 4, 5};
    char charArr[] = {'x', 'y', 'z', '\0'};
    char mixArr[] = "hello"; // string literal : includes null terminator automatically

    // output consists of random characters after 'd' because there is no null terminator
    cout << "String: " << str << endl;
    cout << "Array: " << arr << endl;               // output is address of array
    cout << "Character Array: " << charArr << endl; // valid string
    cout << "Mixed Array: " << mixArr << endl
         << endl; // valid string

    cout << "Length of str: " << strlen(str) << endl; // 4
    // cout << "Length of arr: " << strlen(arr) << endl;      not work on int array
    cout << "Length of charArr: " << strlen(charArr) << endl; // 3 : excludes null terminator
    cout << "Length of mixArr: " << strlen(mixArr) << endl
         << endl; // 5 : excludes null terminator

    cout << "Size of str: " << sizeof(str) << endl;         // 4
    cout << "Size of arr: " << sizeof(arr) << endl;         // 20
    cout << "Size of charArr: " << sizeof(charArr) << endl; // 4 : includes null terminator
    cout << "Size of mixArr: " << sizeof(mixArr) << endl
         << endl; // 6 : includes null terminator

    // another way to print lenth with loop

    
    return 0;
}