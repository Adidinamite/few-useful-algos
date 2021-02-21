#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("ferma.in");
ofstream fout("ferma.out");
const int DIMENSIUNE =  405;
int N, M, V, numarul_zonei;
int matrice[DIMENSIUNE][DIMENSIUNE];
int matriceFill[DIMENSIUNE][DIMENSIUNE];
int di[4] = {-1, 0, 1, 0};
int dj[4] = {0, 1, 0, -1};
int d[DIMENSIUNE*DIMENSIUNE];
bool OK(int i, int j)
{
    if(i < 1 || j < 1 || i > N || j > M)
        return false;
    if(matriceFill[i][j] != 0)
        return false;
    return true;
}
void algFill(int x, int y)
{
    matriceFill[x][y] = numarul_zonei;
    d[numarul_zonei]++;
    for(int i = 0; i < 4; i++)
    {
        int newI = x + di[i];
        int newJ = y + dj[i];
        if(OK(newI, newJ) && matrice[x][y] == matrice[newI][newJ])
            algFill(newI,newJ);
    }
}
int main()
{
    int maxim = 0;
    fin >> V >> N >> M;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            char c;
            fin >> c;
            matrice[i][j] = (int) c;
        }
    }
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            if(!matriceFill[i][j])
            {
                numarul_zonei++;
                algFill(i, j);
                if(maxim < d[numarul_zonei])
                    maxim = d[numarul_zonei];
            }
        }
    }
    if(V == 1)
        fout << maxim << "\n";
}
