#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Map: key-value pair

    map<string, int> m; // (key, value)

    // insert, emplace
    m.insert({"Grapes", 100});
    m.emplace("Banana", 50);
    m["Orange"] = 80;  // another way to insert

    // map<string, int> val =====> give error
    /*
        Internally, a map stores elements of type: pair<const string, int>
        i.e. map<string, int> != pair<const string, int>
        or use auto for automatic type deduction
    */
    cout << "Elemnts: " << endl;
    for(pair<const string, int> val : m){
        cout << "(" <<val.first << ", " << val.second << ")" << endl;
    }
    cout << endl;

    m["Orange"] = 120; // this will over-ride the previous value of same key
    m.insert({"Grapes", 140}); // this will be ignored as key already exists

    // ways to print map:
    cout << "Grapes m[Grapes]: " << m["Grapes"] << endl; // 120

    // they are printed in lexicographical order of keys (ascending => alphabets or numbers)
    cout << "Elements after updation: " << endl;
    for(auto val : m){
        cout << "(" <<val.first << ", " << val.second << ")" << endl;
    }
    cout << endl;

    // count
    cout << "Count of Apple: " << m.count("Apple") << endl << endl; // 1

    // erase
    m.erase("Banana");
    cout << "Elements after erasing Banana: " << endl;
    for(auto val : m){
        cout << "(" <<val.first << ", " << val.second << ")" << endl;
    }
    cout << endl;

    // find
    /*
        Found => returns its iterator
        Not Found => returns m.end() iterator (i.e. one step ahead of last element of map)

        [ 1 | 2 | 3 | 4 | 5 ] .......
        .                       ^
        .                       |
        .                    m.end()
    */
    if(m.find("Grapes") != m.end()){
        cout << "Grapes found" << endl;
    }else{
        cout << "Grapes not found" << endl;
    }

    if(m.find("Banana") != m.end()){
        cout << "Banana found" << endl;
    }else{
        cout << "Banana not found" << endl;
    }

    // size, empty, erase
    
    return 0;
}