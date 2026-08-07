#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    /*
        1      2       3
        4      5       6
        7      8       9
        10     11      12
    */
    /*
        0,0    0,1    0,2
        1,0    1,1    1,2
        2,0    2,1    2,2
        3,0    3,1    3,2
    */
    cout << "[3][1] : " << arr[3][1] << endl; // Output: 11
    cout << "[0][0] : " << arr[0][0] << endl; // Output: 1
    cout << endl;

    // Updation/Replacement

    // Before:
    cout << "Before [2][2] : " << arr[2][2] << endl; // Output: 9
    // After:
    arr[2][2] = 100;                          // Replacing 9 with 100
    cout << "After  [2][2] : " << arr[2][2] << endl; // Output: 100

    return 0;
}