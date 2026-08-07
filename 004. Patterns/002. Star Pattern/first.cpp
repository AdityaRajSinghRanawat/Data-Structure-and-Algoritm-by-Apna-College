#include <iostream>
using namespace std;

int main()
{

    // for n terms we have two option
    // 1. i = 1 to n
    // 2. i = 0 to n-1 [commonly used for arrays]


    int n = 4;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 4; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}