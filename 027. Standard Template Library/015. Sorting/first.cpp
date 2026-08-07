#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // array sort:-
    int arr[] = {5, 3, 1, 4, 2};
    int n = 5; // size

    /*
        [ 1 | 2 | 3 | 4 | 5 ]
        .                 ^     ^
        .                 |     |
        .   ((arr + n) - 1)     (arr + n) [not included]
    */

    sort(arr, arr + n); // pass arr as pointer AND (st, end) where end is not included

    cout << "Array: ";
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    // descending sort:-
    sort(arr, arr + n, greater<int> ()); // greater<int> is a comparator function / functor (function object)
    
    cout << "Descending Array: ";
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    // vector sort:-
    vector<int> v = {5, 3, 1, 4, 2};
    
    sort(v.begin(), v.end());

    cout << "Vector: ";
    for(int val : v){
        cout << val << " ";
    }
    cout << endl;

    // decending sort:-
    sort(v.begin(), v.end(), greater<int> ());
    
    cout << "Descending Vector: ";
    for(int val : v){
        cout << val << " ";
    }
    cout << endl;

    // pair sorting:-

    vector<pair<int, int>> p = {{2, 3}, {3, 1}, {2, 1}, {1, 2}, {1, 8}};

    sort(p.begin(), p.end()); // sort based on first element of pair

    cout << "Pair: " << endl;
    for(auto val : p){
        cout << "(" << val.first << ", " << val.second << ")" << endl;    
    }

    sort(p.begin(), p.end(), greater<pair<int, int>>());
    
    cout << "Descending Pair: " << endl;
    for(auto val : p){
        cout << "(" << val.first << ", " << val.second << ")" << endl;    
    }

    return 0;
}