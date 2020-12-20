#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <sstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");

void afiseazaSolutie(int solutia[], int marime) {
    for(int j = 0; j<marime; ++j)
        cout<<solutia[j] << " ";
    cout << endl;
}

void solutieLaPozitia(int liniaCurenta, int solutia[], vector<vector<int>> matrice) {


    if(liniaCurenta == matrice.size()) {
        afiseazaSolutie(solutia, matrice.size());
        return;
    } else {
       vector<int> linie = matrice.at(liniaCurenta);
       for(int i = 0; i<linie.size(); ++i)
       {
           solutia[liniaCurenta] = linie.at(i);
           solutieLaPozitia(liniaCurenta + 1, solutia, matrice);
       }
    }
}

int main()
{

    string linieString;
    vector < vector < int > > matrice;

    while(getline(fin, linieString))
    {
        vector <int> numere;
        stringstream fragmente_linieString(linieString);
        int fragment;
        while (fragmente_linieString >> fragment) {
            numere.push_back(fragment);

        }
        matrice.push_back(numere);

    }

    int solutie[matrice.size()];

    solutieLaPozitia(0,solutie, matrice);
    return 0;
/*INPUT
5 6 7
1 2
10 11 12 13
1
2
3
4

OUTPUT
5 1 10 1 2 3 4
5 1 11 1 2 3 4
5 1 12 1 2 3 4
5 1 13 1 2 3 4
5 2 10 1 2 3 4
5 2 11 1 2 3 4
5 2 12 1 2 3 4
5 2 13 1 2 3 4
6 1 10 1 2 3 4
6 1 11 1 2 3 4
6 1 12 1 2 3 4
6 1 13 1 2 3 4
6 2 10 1 2 3 4
6 2 11 1 2 3 4
6 2 12 1 2 3 4
6 2 13 1 2 3 4
7 1 10 1 2 3 4
7 1 11 1 2 3 4
7 1 12 1 2 3 4
7 1 13 1 2 3 4
7 2 10 1 2 3 4
7 2 11 1 2 3 4
7 2 12 1 2 3 4
7 2 13 1 2 3 4


*/



}
