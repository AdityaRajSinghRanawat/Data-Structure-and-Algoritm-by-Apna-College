#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // top
    for(int i = 0; i < n; i++){
        for(int space = (n - (i + 1)); space > 0; space--){
            cout << " ";
        }
        cout << "*";
        if(i != 0){
            for(int space = 0; space < ((2*i)-1); space++){
            cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for(int i = 0; i < (n-1); i++){
        for(int space = 0; space < (i+1); space++){
            cout << " ";
        }
        cout << "*";
        if(i < (n-2)){
            for(int space = ((2*(n-(i+2)))-1); space > 0; space--){
            cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}