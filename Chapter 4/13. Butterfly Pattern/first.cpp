#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // top
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (i+1); j++){
            cout << "*";
        }
        for(int space = 0; space < (2*(n-(i+1))); space++){
            cout << " ";
        }
        for(int j = 0; j < (i+1); j++){
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for(int i = 0; i < n; i++){
        for(int j = (n-(i+1)); j > 0; j--){
            cout << "*";
        }
        for(int space = 0; space < (2*(i+1)); space++){
            cout << " ";
        }
        for(int j = (n-(i+1)); j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}