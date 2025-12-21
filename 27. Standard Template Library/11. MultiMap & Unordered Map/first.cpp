#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // MultiMap: 
    /*
        allows to store same key multiple times
        but we cant access the value using [] as it creates ambiguity
    */ 
    multimap<string, int> m;

    m.insert({"Grapes", 90});
    m.insert({"Banana", 40});
    m.emplace("Apple", 120);
    
    m.insert({"Grapes", 70}); // allows same key (do not ignore as like basic map)
    // this will be inserted in the same order as they are inserted

    cout << "Elements in MultiMap: " << endl;
    for(auto val : m){
        cout << "(" << val.first << ", " << val.second << ")" << endl;
    }
    cout << endl;

    m.erase("Grapes"); // erases all "Grapes" keys
    cout << "Elements after erasing Grapes: " << endl;
    for(auto val : m){
        cout << "(" << val.first << ", " << val.second << ")" << endl;
    }
    cout << endl;

    m.insert({"Grapes", 150});
    m.insert({"Grapes", 70});
    m.insert({"Grapes", 210});

    m.erase(m.find("Grapes")); // erases only one "Grapes" key (the first one found)
    cout << "Elements after erasing Grapes (m.find(Grapes)): " << endl;
    for(auto val : m){
        cout << "(" << val.first << ", " << val.second << ")" << endl;
    }   

    // Unordered Map: 
    /*
        DO NOT allow dublicate keys
    */ 
    unordered_map<string, int> um; // stored in random order (based on hash function)

    um.insert({"Grapes", 90});
    um.insert({"Banana", 40});
    um.emplace("Apple", 120);
    um["Orange"] = 110;

    cout << "\nElements in Unordered Map: " << endl;
    for(auto val : um){
        cout << "(" << val.first << ", " << val.second << ")" << endl;
    }
    

    // Priority of Usage: Unordered Map > Map > MultiMap

    // Time Complexity: (erase, insert, find)
    // Unordered Map: O(1)      [because of hashing and no order maintenance]
    // Map:           O(log n)  [because of self balancing BST and order maintenance]

    // Note: In rare cases, unordered map time complexity can be O(n) 
    // when hash collisions occur, but majority times it is O(1).
    
    return 0;
}