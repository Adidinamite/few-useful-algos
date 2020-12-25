//CUSTOM DEFAULT SETTINGS
#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <fstream>
///////////////////
using namespace std;

int main()
{
    int v[10] ={-4, -6,-7,-2,-1,-4,-10,-3};
    int n =8;
    int suma = 0, sumaMax= 0, elemPoz = 0, elemMax = -1000;
    for(int i =0; i<n; ++i)
    {
        suma+=v[i];
        if(suma<0)
            suma = 0;
        if(suma > sumaMax)
            sumaMax = suma;
        if(v[i] > 0)
            elemPoz ++;
        if(v[i] > elemMax)
            elemMax = v[i];
    }
    if(elemPoz > 0)
        cout << sumaMax;
    else
        cout << elemMax;
    
    return 0;
}

