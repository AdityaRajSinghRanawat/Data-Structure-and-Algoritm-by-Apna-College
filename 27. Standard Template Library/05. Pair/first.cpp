#include <iostream>
#include <utility> // for pair (optional)
#include <vector>

using namespace std;

int main()
{
    // Sequence Container => which stores data in linear fashion 
    /*
        Vector  (Dynamic Array)
        List    (Doubly Linked List)
        Deque   (Double Ended Queue / Dynamic Array)
    */ 
    
    // Non-Sequence Container => which stores data in non-linear fashion
    /*
        Set
        Multiset
        Map
        Multimap
    */

    // Special Container
    /*
        Stack
        Queue
        Priority Queue
        Pair
    */
    
    // Pair: (part of utility library)
    // you can use it without #including<utility> header as it is included in #include<iostream>

    pair<int, int> p = {1, 3};
    cout << "First {1, 3}: " << p.first << endl;
    cout << "Second {1, 3}: " << p.second << endl;

    pair<char, int> p2 = {'a', 5}; 
    cout << "First {'a', 5}: " << p2.first << endl;
    cout << "Second {'a', 5}: " << p2.second << endl;

    pair<string, int> p3 = {"Aditya", 100};
    cout << "First {Aditya, 100}: " << p3.first << endl;
    cout << "Second {Aditya, 100}: " << p3.second << endl;

    // pair of pair
    pair<int, pair<char, int>> p4 = {14, {'c', 28}};
    cout << "First {14, {'c', 28}}: " << p4.first << endl;
    cout << "second.first {14, {'c', 28}}: " << p4.second.first << endl;
    cout << "second.second {14, {'c', 28}}: " << p4.second.second << endl;

    // vector of pair
    vector<pair<char, int>> vec = {{'a', 1}, {'b', 2}, {'c', 3}};
    cout << "Vector of pairs: ";
    for(pair<char, int> value: vec){ // or (auto value: vec)
        cout << "{" << value.first << ", " << value.second << "}" << " ";
    }
    cout << endl;
    
    return 0;
}