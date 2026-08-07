#include <iostream>
using namespace std;

int main()
{   int n;
    cout << "enter number of lines" << endl;
    cin >> n;
    for(int i = 1; i <= n; i++){ // lines
        for(int j = 1; j <=10; j++){ // no of stars
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}