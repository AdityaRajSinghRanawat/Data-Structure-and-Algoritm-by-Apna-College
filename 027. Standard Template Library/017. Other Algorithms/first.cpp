#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    vector<int> v = {5, 4, 3, 2, 1};

    // Reverse:
    /*
        reverse(v.begin(), v.end())
    */
    reverse(v.begin(), v.end());

    cout << "reverse(): ";
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    // for range to be reversed
    reverse(v.begin() + 1, v.begin() + 4); // from 1 to 3 (4 not included)

    cout << "reverse(1, 3): ";
    for(auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    // Next Permutation:
    /*
        next_permutation(v.begin(), v.end())
    */
    /*
        sorted in lexicographical order (dictionary):-
        abc
        acb
        bac
        bca
        cab
        cba

        6! = n!
    */
    string s = "bca";
    cout << "string: " << s << endl;

    next_permutation(s.begin(), s.end()); // function returns bool not string
    cout << "next permutation (bca): " << s << endl;

    s = "bca";
    prev_permutation(s.begin(), s.end()); // function returns bool not string
    cout << "previous permutation (bca): " << s << endl << endl; 
    
    // swap, min, max:
    int a = 10, b = 20;
    cout << "Before swap => " << "a: " << a << " b: " << b << endl;
    swap(a, b);
    cout << "After swap  => " << "a: " << a << " b: " << b << endl;

    cout << "min(1, 2): " << min(1, 2) << endl;
    cout << "max(1, 2): " << max(1, 2) << endl << endl;

    // Max and Min Element:
    /*
        - Returns iterator

        max_element(v.begin(), v.end())
        min_element(v.begin(), v.end())
    */
    vector<int> vec = {20, 40, 10, 60, 50};
    
    cout << "vector: ";
    for(auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "max element: " << *(max_element(vec.begin(), vec.end())) << endl;
    cout << "min element: " << *(min_element(vec.begin(), vec.end())) << endl << endl;

    // Binary Search:
    /*
        - Data must be sorted

        binary_search(v.begin(), v.end(), target)
    */
    vector<int> bsv = {10, 20, 30, 40, 50};

    cout << "vector: ";
    for(auto val : bsv)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "binary_search(30): " << binary_search(bsv.begin(), bsv.end(), 30) << endl;
    cout << "binary_search(60): " << binary_search(bsv.begin(), bsv.end(), 60) << endl << endl;

    // Count Set Bits:
    /*
        __builtin_popcount()
        __builtin_popcountl()
        __builtin_popcountll()
    */

    int n = 15; // 4 Byte = 32 bits
    // 00000.... 1111 (last 4 bits are 1)
    // since this function is built on gcc compiler it is not compatible with all compiler
    // mostly used in competitive programming

    cout << "Count set bits: " << __builtin_popcount(n) << endl;

    long int p = 15;
    cout << "Count set bits: " << __builtin_popcountl(p) << endl;

    long long int q = 15;
    cout << "Count set bits: " << __builtin_popcountll(q) << endl;

    return 0;
}