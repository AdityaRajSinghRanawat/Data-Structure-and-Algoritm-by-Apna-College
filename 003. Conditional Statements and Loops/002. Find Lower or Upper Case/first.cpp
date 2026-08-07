#include <iostream>
using namespace std;

int main()
{
    char characterVariable;
    cout << "enter a character :" << endl;
    cin >> characterVariable;

    if(characterVariable >= 'a' && characterVariable <='z'){
        cout <<  "lowercase" << endl; 
    }else if(characterVariable >= 'A' && characterVariable <='Z'){
        cout <<  "uppercase" << endl; 
    }else{
        cout << "invalid input" << endl;
    }


    // as per ASCI
    if(characterVariable >= 97 && characterVariable <= 122){ 
        // here implicite type conversion is used
        cout <<  "lowercase" << endl; 
    }else if(characterVariable >= 65 && characterVariable <= 90){
        cout <<  "uppercase" << endl; 
    }else{
        cout << "invalid input" << endl;
    }

    return 0;
}