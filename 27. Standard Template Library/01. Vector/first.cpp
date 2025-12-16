#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    // dyamic resize
    /*
        [ 1 ]               => size = 1, capacity = 1
        [ 1 | 2 ]           => size = 2, capacity = 2
        [ 1 | 2 | 3 |   ]   => size = 3, capacity = 4 (doubled)
        [ 1 | 2 | 3 | 4 ]   => size = 4, capacity = 4
    */

    vec.push_back(1);
    vec.push_back(2);

    vec.push_back(3);
    cout << "[1 | 2 | 3 |  ]" << endl;
    cout << "Size: " << vec.size() << endl;                 // number of elements
    cout << "Capacity: " << vec.capacity() << endl << endl; // total allocated memory

    vec.push_back(4);
    vec.push_back(5);

    cout << "After push_back(): " << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl << endl;

    vec.pop_back();
    cout << "After pop_back(): " << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl << endl;

    vec.push_back(5); // assume the data type of new number is same as vector data type
    vec.emplace_back(6); // more efficient than push_back // it creates the emplace objects (will learn in pairs)

    cout << "After push_back() and emplace_back(): " << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl << endl;

    // .at() OR []
    cout << "Element at index 2 (vec.at()): " << vec.at(2) << endl; // with bounds checking
    cout << "Element at index 2 (vec[])   : " << vec[2] << endl;    // without bounds checking // prefered for simplicity
    cout << endl;

    // .front() and .back()
    cout << "First element (front): " << vec.front() << endl;
    cout << "Last element  (back) : " << vec.back() << endl;

    // vector initialization
    vector<int> vec2 = {10, 20, 30, 40, 50};
    cout << "\nInitialized vector: ";
    for (int val : vec2)
    {
        cout << val << " ";
    }
    cout << endl;

    // vector(size, initial_value) // used in Dynamic Programming - Tabulation DP[][] Vectors/Arrays 1D/2D 
    vector<int> vec3(5, -1); 
    cout << "\nVector (size, initial_value): ";
    for (int val : vec3)
    {
        cout << val << " ";
    }
    cout << endl;

    // Copying one vector to another
    vector<int> vec4(vec3); 
    cout << "\nCopied vector: ";
    for (int val : vec4)
    {
        cout << val << " ";
    }
    cout << endl << endl;

    // above methods work in Time Complexity: O(1)
    // below methods work in Time Complexity: O(n)

    // erase()
    
    vector<int> vec5 = {1, 2, 3, 4, 5, 6, 7, 8};
    
    cout<< "Before erase(): ";
    for (int val : vec5)
    {
        cout << val << " ";
    }
    cout << endl << endl;
    
    vec5.erase(vec5.begin()); // needs iterator (pointer) to the position
    cout << "After erase (.begin()): " << endl;
    for (int val : vec5)
    {
        cout << val << " ";
    }
    cout << endl << endl;

    vec5.erase(vec5.begin() + 2); // erase from index 2
    cout << "After erase (begin() + 2): " << endl;
    for (int val : vec5)
    {
        cout << val << " ";
    }
    cout << endl << endl;

    vec5.erase(vec5.begin() + 2, vec5.begin() + 5); // erase from index 2 to index 5 (not included)
    cout << "After erase (begin() + 2, begin() + 5): " << endl;
    for (int val : vec5)
    {
        cout << val << " ";
    }
    cout << endl << endl;

    // insert()
 
    vector<int> vec6 = {1, 2, 3, 4, 5};
    
    cout<< "Before insert(): ";
    for (int val : vec6)
    {
        cout << val << " ";
    }
    cout << endl << endl;
    

    vec6.insert(vec6.begin(), 10); // (position, value)
    cout << "After insert (begin(), 10): ";
    for (int val : vec6)
    {
        cout << val << " ";
    }
    cout << endl << endl;


    vec6.insert(vec6.begin() + 2, 20); // (position, value)
    cout << "After insert (begin() + 2, 20): ";
    for (int val : vec6)
    {
        cout << val << " ";
    }
    cout << endl << endl;

    // clear()
    vector<int> vec7 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vec7.clear(); // clear the entire vector elements (size) but the capacity remains same
    cout << "After clear(), size: " << vec7.size() << endl;
    cout << "After clear(), capacity: " << vec7.capacity() << endl;

    return 0;
}