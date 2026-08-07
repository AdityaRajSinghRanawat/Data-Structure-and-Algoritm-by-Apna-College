#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    char ch;
    
    for(int i = 1; i <= n; i++){
        ch = 'A';
        for(int j = 1; j <= 4; j++){
            cout << ch;
            ch++; // char 66[A] + 1 = 67[B]
        }
        cout << endl;
    }

    return 0;
}