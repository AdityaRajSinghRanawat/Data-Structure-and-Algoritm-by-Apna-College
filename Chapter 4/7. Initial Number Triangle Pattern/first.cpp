#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int num = 1;


    for(int i = 0; i < n; i++){
        num = 1;
        for(int j = 0; j < i+1; j++){
            cout << num;
            num++;
        }
        cout << endl;
    }


    cout << endl;

    // OR

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i+1; j++){
            cout << j;
        }
        cout << endl;
    }




    return 0;
}