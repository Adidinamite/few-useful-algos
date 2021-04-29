#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector< int > v ={1,2 ,5 , 7, 7, 9, 25};
    for(auto i : v)
        cout<< i << " ";
    /*
    // size 10, initial value 0
    vector<int> v(10);
    // size 10, initial value 5
    vector<int> v(10, 5)
    */
    /*
    Thestringstructure is also a dynamic array that can be used 
    almost likea vector. In addition, there is special syntax for 
    strings that is not available inother data structures. 
    Strings can be combined using the+symbol. The functionsubstr(k,x) 
    returns the substring that begins at positionkand has lengthx, 
    andthe functionfind(t) finds the position of the first occurrence 
    of a substringt.The following code presents some string operations
    */
    
    string a = "hatti";
    string b = a+a;
    cout << b << "\n"; 
    // hattihattib[5] = ’v’;
    cout << b << "\n"; 
    // hattivattistring 
    c = b.substr(3,4);
    cout << c << "\n"; // tiva
}


