#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
        Vector Syntax:-

        - e.g. in array of size 100 we can never insert 1000 info
        - so vectors are dynamic and resize at realtime

        Syntax:-

        vector<int> vec;
        vector<int> vec = {1, 2, 3}
        vector<int> vec(3, 0)
    */

    // include vector headerfile/library to resolve error

    /*
        many people use:-

        #include <bits/c++.h>

        but it is recommended to do not use it
        because in interviews it can be asked that
        what is the headerfile of vector, map, etc

        also it is better approch for writing industry level code
        also since we are learning DSA we should be aware of
        individual headerfile for different DS
    */

    // vec is the name
    vector<int> vec; // size = 0
    
    vector<int> vec2 = {1, 2, 3}; // size = 3
    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;

    /*
        # When using teminal:-

        g++ --std=c++11 code.cpp && ./a.out

        this extra [--std=c++11] secify that we are using c++ 's 11 standard
        for vector, map, etc of  STL 
    */

    // vec(size of the vector, value of each index)
    vector<int> vec3(5, 0);
    cout << vec3[0] << endl; 
    cout << vec3[1] << endl; 
    cout << vec3[2] << endl; 
    cout << vec3[3] << endl; 
    cout << vec3[4] << endl; 


    // special loop for vector
    // for each loop:-

    for(int i : vec3) // i is the value of each index of vec3
    {
        cout << i << " ";
    }
    cout << endl;

    vector<char> charVec = {'a', 'b', 'c', 'd', 'e'}; // size = 5
    for (char i : charVec)
    {
        cout << i << " ";
    }
    cout << endl;

    // to print ASCII value of char
    for(int i : charVec)
    {
        cout << i << " "; // typecasting char to int
    }
    cout << endl;

    return 0;
}