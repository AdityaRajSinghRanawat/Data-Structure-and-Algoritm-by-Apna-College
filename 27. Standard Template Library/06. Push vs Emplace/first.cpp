#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // push_back vs emplace_back:

    vector<pair<int, int>> vec;

    // it assume that you have already made a object pair and it just insert it
    vec.push_back({1, 2}); // just insert the object
    
    // more efficient and no curly braces needed
    vec.emplace_back(1, 2); // creates the in-place objects
    
    // Conclusion:
    /*
        i.e. if we have object which are already created then use push_back
        when you want that objects are created in palace then use emplace_back
    */

    return 0;
}