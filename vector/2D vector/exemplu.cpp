#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector< vector<int> > grid(3, vector<int>(4, 7));// 3 rows 4 columns cu valoarea dupa ,
    grid[1].push_back(8);// adaug o valoare pe a 2 a linie
    for(int row = 0; row<grid.size(); ++row)
    {
        for(int col = 0; col<grid[row].size(); ++col)
        {
            cout << grid[row][col] ;}
        cout<< endl;
    }
     return 0;
}
