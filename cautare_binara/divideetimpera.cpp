#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <sstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int catuareBinaraWhile(int numar , vector<int> numere )
{
    int sol = -1;
    int st =0, dr = numere.size(), mij;
    while(st< dr)
    {
        mij = (st+dr)/2;

       // cout << "st:" << st <<

        if(numere.at(mij) == numar)
        {
            sol = mij;
            break;
        }
        else if(numere.at(mij) > numar)
            dr = mij-1;
        else if(numere.at(mij) < numar)
            st = mij +1;

    }
    return sol;
}
int cautareBinaraRecursiva(int st, int dr, int numar, vector<int> numere){
    if(st > dr)
        return -1;

    int mij = (st+dr)/2;

    if(numere.at(mij) == numar)
        return mij;
    else if(numar > numere.at(mij))
        return cautareBinaraRecursiva(mij +1, dr, numar, numere);
    else if(numar < numere.at(mij))
        return cautareBinaraRecursiva(st, mij-1, numar, numere);

}

int main()
{
    int n;
    vector<int> numere;
    while(fin >> n){
            numere.push_back(n);
    }
    int x;
    cin >> x;

    cout << catuareBinaraWhile(x, numere)<< endl;
    cout << cautareBinaraRecursiva(0, numere.size(), x, numere);
    /// populeaza vectorul cu numere de la 0 la 1000

    /// citesti x de la tastatura

    /// afisezi pe ce pozitie existra (-1 daca nu ex)


}
