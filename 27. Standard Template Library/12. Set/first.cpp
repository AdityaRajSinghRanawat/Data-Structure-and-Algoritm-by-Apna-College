#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // insert and emplace
    s.insert(1);
    s.emplace(2);
    s.insert(3);
    s.emplace(4);
    s.insert(5);

    // these will not be inserted
    s.insert(1);
    s.emplace(2);
    s.insert(3);
    
    cout << "Set: "; 
    for(auto val : s){
        cout << val << " "; // unique and sorted (ascending)
    }
    cout << endl;

    // count
    cout << "Count (3): " << s.count(3) << endl; // will always be 1 because unique

    // erase
    s.erase(3);
    cout << "After erase(3): ";
    for(auto val : s){
        cout << val << " "; 
    }
    cout << endl;

    // find
    s.insert(20);
    cout << "Find (20): " << *(s.find(20)) << endl; // will return iterator to the element

    // size
    // the size remain same even when you insert dublicate
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    cout << "Elements: ";
    for(auto val : s){
        cout << val << " ";
    }
    cout << endl;
    cout << "Size: " << s.size() << endl; 
    
    // empty, erase => same as map

    // Time Complexity (because set are internally Self Balalncing Tree): O(logn)

    return 0;
}