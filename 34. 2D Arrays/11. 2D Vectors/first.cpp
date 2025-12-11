#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << arr[0][0] <<  endl;
    cout << arr[1][2] << endl;
    cout << endl;


    // Dynamic Size Allocation for Rows and Columns
    // rows = arr.size();
    // cols = arr[i].size();

    /*
        1   2   3   4     => col = row.size() => arr[i].size() => 4
        5   6   7   8
        9   10  11  12 

        rows => arr.size() = 3
    */

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    

    // 2D Array VS 2D Vector
    // we can add non-uniform size of rows in vector

    /*
        1    2    3
        4    5    6    7 
        8    9    10     
    */

    vector<vector<int>> arr2 = {{1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10}};

    for(int i = 0; i < arr2.size(); i++){
        for(int j = 0; j < arr2[i].size(); j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}