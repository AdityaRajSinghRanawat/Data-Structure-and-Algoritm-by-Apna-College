#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        # Vector Functions:-
        - size
        - push_back
        - pop_back
        - front
        - back
        - at
    */

    // size
    vector<char> vec = {'a', 'b', 'c', 'd'};
    for (char i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "size: " << vec.size() << endl; // 4
    cout << endl;
    
    // push_back
    vec.push_back('e');
    vec.push_back('f');
    cout << "After puch_back:" << endl; 
    for (char i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "size: " << vec.size() << endl; // 5
    cout << endl;

    // pop_back
    vec.pop_back();
    cout << "After pop_back:" << endl;
    for (char i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "size: " << vec.size() << endl; // 5
    cout << endl;


    // front
    cout << "front: " << vec.front() << endl; // a
    cout << endl;

    // back
    cout << "back: " << vec.back() << endl; // e
    cout << endl;


    // at
    cout << "at(0): " << vec.at(0) << endl; // a
    cout << "at(1): " << vec.at(1) << endl; // b
    cout << "at(2): " << vec.at(2) << endl; // c
    cout << "at(3): " << vec.at(3) << endl; // d
    cout << "at(4): " << vec.at(4) << endl; // e
    cout << endl;



    return 0;
}