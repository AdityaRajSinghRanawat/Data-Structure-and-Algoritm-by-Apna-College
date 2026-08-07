#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int k = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cout << "*";
        }
        k++;
        cout << endl;
    }



    cout << endl;



    // OR

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}