#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    // Multiset => allow duplicate elements
    multiset<int> ms;

    ms.insert(1);
    ms.emplace(2);
    ms.insert(3);
    ms.emplace(4);
    ms.insert(5);

    ms.insert(3);
    ms.insert(4);
    ms.emplace(5);

    cout << "Multiset: ";
    for(auto val : ms){
        cout << val << " ";
    }
    cout << endl;

    // Unordered Set => does not allow duplicate elements
    unordered_set<int> us;

    us.insert(1);
    us.emplace(2);
    us.insert(3);
    us.emplace(4);
    us.insert(5);

    us.insert(3);
    us.insert(4);
    us.emplace(5);

    cout << "Unordered Set: "; // not necessarily sorted (might appear sorted)
    for(auto val : us){
        cout << val << " ";
    }
    cout << endl;

    // Time Complexity: 
    // Multiset: O(n)
    // Unordered Set: O(1) (since random)    [rarely O(n)]

    // Because Unordered Set are not sorted,
    // so concept of lower_bound and upper_bound does not exist in them

    return 0;
}