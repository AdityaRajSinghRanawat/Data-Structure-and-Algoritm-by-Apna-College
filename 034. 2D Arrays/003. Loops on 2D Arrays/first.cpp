#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {{10, 20, 30, 40},
                     {50, 60, 70, 80},
                     {90, 100, 110, 120}};

    int rows = 3;
    int cols = 4;

    cout << "Print 2D Array to 1D: " << endl;
    for (int i = 0; i < rows; i++) // rows
    {
        for (int j = 0; j < cols; j++) // columns
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl << endl;

    cout << "Print 2D Array in 2D format: " << endl;
    for (int i = 0; i < rows; i++) // rows
    {
        for (int j = 0; j < cols; j++) // columns
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; // new line after each row
    }

    // To take input in 2D Array
    int arr2[3][2];

    int r = 3;
    int c = 2;

    cout << endl << "Enter elements for 2D Array:" << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr2[i][j];
        }
    }
    cout << endl;

    cout << "You entered:" << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}