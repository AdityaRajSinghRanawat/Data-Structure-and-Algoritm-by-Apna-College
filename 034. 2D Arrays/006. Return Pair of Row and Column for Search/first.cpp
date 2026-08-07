#include <iostream>
#include <string>
using namespace std;

/* 
    arr[][] -> Invalid
    arr[][4] -> Valid

    Reason:
    We must specify the columns as compiler needs this info to access
    elements of 2d array correctly.
*/ 
string linearSearch(int arr[][4], int rows, int cols, int key){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == key){
                return "(" + to_string(i) + ", " + to_string(j) + ")";
            }
        }
    }
    return "(-1, -1)";
}

int main()
{
    int arr[3][4] = {{10, 20, 30, 40},
                     {50, 60, 70, 80},
                     {90, 100, 110, 120}};
    
    int rows = 3;
    int cols = 4;

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    cout << linearSearch(arr, rows, cols, key) << endl;
    return 0;
}