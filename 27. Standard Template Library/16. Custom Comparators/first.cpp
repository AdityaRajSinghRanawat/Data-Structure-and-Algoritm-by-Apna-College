#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comperator(pair<int, int> p1, pair<int, int> p2){ // custom function
    if(p1.second < p2.second) {
        return true;
    }
    else if(p1.second > p2.second){
        return false;
    } 
    
    // it means p1.second == p2.second
    
    if(p1.first < p2.first){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    // Custom Comparators => returns boolean value i.e. true or false
    vector<pair<int, int>> v = {{2, 3}, {3, 1}, {2, 1}, {1, 2}, {1, 8}};

    sort(v.begin(), v.end(), comperator);

    cout << "After sorting: " << endl;
    for (auto val : v)
    {
        cout << val.first << " " << val.second << endl;
    }
    
    return 0;
}