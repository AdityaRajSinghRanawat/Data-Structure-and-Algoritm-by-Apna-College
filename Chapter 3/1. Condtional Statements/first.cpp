#include <iostream>
using namespace std;

int main()
{   
    int n =10;


    // if else
    if(n >= 0){
        cout << "positive" << endl;
    }else{
        cout << "negative" << endl;
    }

    int age;
    cout << "Enter the age : " << endl;
    cin >> age;
    if(age >= 60){
        cout << "senior citizen" << endl;
    }else{
        cout << "not sernior citizen" << endl;
    }


    // else if
    if(age >= 60){
        cout << "greater than 60" << endl;
    }else if(age >= 40){
        cout << "greater than 40" << endl;
    }else if(age >= 20){
        cout << "greater than 20" << endl;
    }else if(age >= 10){
        cout << "greater than 10" << endl;
    }else{
        cout << "less than 10" << endl;
    }










    return 0;
}