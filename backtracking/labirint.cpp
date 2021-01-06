#include <iostream>

using namespace std;
int labirint[1002][1002];
int n , m, i , j;
int starti, startj, finishi, finishj;
int deplasareI[4] = {-1, 0, +1, 0};
int deplasareJ[4] = {0, +1, 0, -1};
void citire()
{
    cin >> n >> m ;
    cin >> starti >> startj ;
    cin >> finishi >> finishj;
    for(i = 0; i<n; ++i)
    {
        for(j=0;j <m; ++j)
        {
            cin >> labirint[i][j];
        }
    }
}
bool verificare(int x, int y)
{
    if(x > n || x  < 1)
        return false;
    if(y > m || y < 1)
        return false;
    if(labirint[x][y] == 1 ||( x == finishi && y == finishj))
        return true;
    if(labirint[x][y] == 0 || labirint[x][y])
        return false;
    return true;
}
void out(){
for(i=0; i<n; ++i){
    {for(j=0; j<m ;++j)
        cout<< labirint[i][j]<<" ";
    }
    cout<< endl;
}
}
void bkt(int x , int y, int pas){
    if(x == finishi && y== finishj)
        out();
    else{
        for(i = 0; i<=3; i++)
        {
            int posI = x + deplasareI[i];
            int posJ = y + deplasareJ[i];
            if(verificare(posI, posJ))
                {
                labirint[posI][posJ] = pas;
                bkt(posI, posJ, pas + 1);
                labirint[posI][posJ] = 0;
        }}
    }
}
int main()
{
    citire();
    //out();
    bkt(starti, startj, 2);
    return 0;
}
