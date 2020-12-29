#include    <iostream>

using namespace std;

int main()
{
    int numar, putere;
    cin >> numar;
    
    int divizor = 2;
    while (numar > 1)
    {
        if(numar % divizor == 0) // Daca numarul se imparte exact la divizor
        {
            putere = 0;
            while(numar % divizor == 0)
            {
                putere = putere + 1;
                numar = numar / divizor;
            }
            cout << divizor << " la puterea " << putere << "\n";
        }
        divizor++;
    }
    
    return 0;
}
