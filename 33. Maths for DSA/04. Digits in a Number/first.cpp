#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;


void digitsPrint(int n){
    while( n != 0){
        int digit = n % 10; // pick last
        cout << digit << " ";
        n /= 10; // remove last
    }
    cout << endl;
}

int digitsCount(int n){
    int count = 0;

    while(n != 0){
        // Time Complexity: O(log10(n))
        // here 10 means how many times we need to divide n by 10 to make it 1
        
        // if n /= 3; then Time Complexity: O(log3(n))
        // if n /= 2; then Time Complexity: O(log2(n))
        n /= 10; 
        count++;
    }
    return count;
}

int digitsCountShortcut(int n){
    // Time Complexity: O(1)
    // Function : log10
    return (int)(log10(n) + 1);
}

int sumOfDigits(int n){
    int sum = 0;
    while(n != 0){
        int digits = n % 10;
        sum += digits;
        n /= 10;
    }
    return sum;
}

void correctOrder(int n){
    string str = to_string(n);
    for(int i = 0; i < str.length(); i++){
        cout << str[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    

    digitsPrint(n);
    cout << digitsCount(n) << endl;
    cout << digitsCountShortcut(n) << endl;
    cout << sumOfDigits(n) << endl;
    correctOrder(n);

    return 0;
}