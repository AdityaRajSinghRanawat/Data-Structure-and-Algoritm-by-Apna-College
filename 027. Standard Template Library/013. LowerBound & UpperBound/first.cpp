#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 6, 7, 8};

    cout << "Set: ";
    for(auto val: s){
        cout << val << " ";
    }
    cout << endl;

    // lower_bound => returns the value/iterator equal to or just greater than the key
    cout << "Lower Bound (4): " << *(s.lower_bound(4)) << endl;
    cout << "Lower Bound (5): " << *(s.lower_bound(5)) << endl;

    // upper_bound => returns the value/iterator just greater than the key
    cout << "Upper Bound (4): " << *(s.upper_bound(4)) << endl;
    cout << "Upper Bound (5): " << *(s.upper_bound(5)) << endl;

    // if value greater than set => return iterator of next to last value => s.end()
    // i.e 0 or garbage value
    cout << "Lower Bound (9): " << *(s.lower_bound(9)) << endl;
    cout << "Upper Bound (9): " << *(s.upper_bound(9)) << endl;

    // lower_bound vs upper_bound:
    /*
        [ a | a | b | b | b | c | c | d ]
        . 0   1   2   3   4   5   6   7
        .         ^           ^
        .         |           |
        . s.lower_bound(b)    s.upper_bound(b)
    */

    return 0;
}