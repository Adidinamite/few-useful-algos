#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");

const int DIMENSIUNE = 9;
int mat[DIMENSIUNE][DIMENSIUNE];

bool full(){
for(int i = 0; i<=8; i++)
{
    for(int j=0; j<=8; j++)
    {
        if (mat[i][j] == 0)
            return false;
    }
}
return true;
}

void citire(){
for(int i = 0; i<=8; i++)
{
    for(int j=0; j<=8; j++)
    {
        fin >> mat[i][j];
    }
}
}

void out(){
    for(int i = 0; i<=8; i++)
{
    for(int j=0; j<=8; j++)
    {
        cout<< mat[i][j] << " " ;
    }
    cout<<"\n";
}
}

bool check(int linie, int col, int x)
{
    for(int l1 = 0; l1<=2; l1++)
    {
        for(int c1 = 0; c1<=2; c1++)
        {
            if(mat[l1 + linie-linie%3][c1 + col-col%3] == x )
                return false;
        }
    }
    ///
    for(int i= 0; i<=8; i++)
    {
        if(mat[i][col] == x)
            return false;
    }
    ///
    for(int i= 0; i<=8; i++)
    {
        if(mat[linie][i] == x)
            return false;
    }
    return true;
}

int bkt(int linie, int col)
{
    //cout<<"o operatie";
    bool ok=true;
    if(full())
        {
        out();
        return 1;}

        if(col==9)
        {
            linie++;
            col=0;
        }
        if(mat[linie][col])
        {
            return bkt(linie, col+1);
        }

            for(int nr=1; nr<=9; nr++)
            {
                if(check(linie,col,nr))
                {
                    mat[linie][col] = nr;
                    if(bkt(linie, col+1))
                        return 1;
                }
                mat[linie][col] = 0;
            }
    return 0;
}
int main()
{
    citire();
    bkt(0,0);

    return 0;
}
/*INPUT
8 0 0 0 0 0 0 0 0
0 0 3 6 0 0 0 0 0
0 7 0 0 9 0 2 0 0
0 5 0 0 0 7 0 0 0
0 0 0 0 4 5 7 0 0
0 0 0 1 0 0 0 3 0
0 0 1 0 0 0 0 6 8
0 0 8 5 0 0 0 1 0
0 9 0 0 0 0 4 0 0

    OUTPUT
8 1 2 7 5 3 6 4 9
9 4 3 6 8 2 1 7 5
6 7 5 4 9 1 2 8 3
1 5 4 2 3 7 8 9 6
3 6 9 8 4 5 7 2 1
2 8 7 1 6 9 5 3 4
5 2 1 9 7 4 3 6 8
4 3 8 5 2 6 9 1 7
7 9 6 3 1 8 4 5 2
*/
