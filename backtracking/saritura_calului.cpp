#include    <iostream>

using namespace std;
int n, calX, calY;
    int posX, posY;
    int cntMoves = 2;
    int tabla[10000][10000];
    int dirX[8] ={-2, -1, 1, 2,  2,  1, -1, -2};
    int dirY[8] ={ 1,  2, 2, 1, -1, -2, -2, -1};
bool verificare()
{
    for(int i = 0; i<n; ++i)
        for(int j=0; j<n; ++j)
            if(tabla[i][j] == 0)
                return 0;
    return 1;
}
void bkt(int calX, int calY)
{
    if(verificare())
    {
        for(int ii = 0; ii < n; ii++)
    {
        for(int jj = 0; jj < n; jj++)
            cout << tabla[ii][jj] << " ";
        cout << endl;
    }
    }
    else{
    for(int i = 0; i < 8; i++)
    {
        int posX = calX + dirX[i];
        int posY = calY + dirY[i];
        if(!(posX > n - 1 || posY > n-1 || posX<0 || posY<0 || tabla[posX][posY]))//ok
        {
            tabla[posX][posY] = cntMoves;
            cntMoves++;

            bkt(posX, posY);
            tabla[posX][posY] = 0;//<-
            cntMoves--;
        }
    }}
}

int main()
{
    cin >> n;
    cin >> calX >> calY;tabla[calX][calY] = 1;
    bkt(calX, calY);
    return 0;
}
