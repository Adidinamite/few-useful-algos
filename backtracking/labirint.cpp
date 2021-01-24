#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout ("date.out");
int r,c;
int mat[100][100], visited[100][100];
int rowMoves[4]={-1,  0, +1,  0};
int colMoves[4]={ 0, +1,  0, -1};
int pas = 0;
void afiseaza(int mat[100][100])
{
    for(int  i=0;i<r;  i++)
    {
        for( int j=0; j<c; j++)
        {
            cout<< mat[i][j] << " ";
        }
        cout<< endl;
    }
}
bool verificare(int linie, int column)
{
    if(linie > r || column > c)
        return false;
    else if(linie<0 || column < 0)
        return false;
    else if(mat[linie][column] == 0)
        return false;
    else if(visited[linie][column] == 1)
        return false;
    return true;
}
int bkt(int linie, int coloana)
{
    cout<<"linie: "<< linie <<" coloana:"<<coloana << endl;
    if(linie == r-1 && coloana == c-1){
        cout<<"Labirintul a fost parcur in " <<pas<<" pasi"<<endl;
    }
    else{
        for(int i= 0;i<=3; i++)
        {

            int linieNoua = linie + rowMoves[i];
            int coloanaNoua = coloana + colMoves[i];
            cout<< "vecini:";
            cout<<"linie: "<< linieNoua <<" coloana:"<<coloanaNoua << endl;
            if(verificare(linieNoua, coloanaNoua))
            {
                pas ++;
                visited[linieNoua][coloanaNoua] = 1;
                afiseaza(visited);
                bkt(linieNoua, coloanaNoua);
                visited[linieNoua][coloanaNoua] = 0;
                pas--;
            }
        }
    }
}

int main()
{

    fin >> r >> c;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            fin >> mat[i][j];
            visited[r][c] = 0;
        }
    }
    afiseaza(mat);
    visited[0][0] = 1;
    bkt(0, 0);
}
/*
se dau r(linii) si c
se citeste matricea ( 0 si 1)
se porneste de la  0-0
ajung la j coloana
1 - psatiu gol
0- perete

*/
