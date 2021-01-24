#include <iostream>
using namespace std;
int tabla[8][8];
int i, j;
int solutii = 0;
bool verificare(int row, int column){
    for(int h = 0; h <=7; h++)
    {
        if(tabla[row][h] == 1)
            return false;
    }
    for(int h = 0; h <=7; h++)
    {
        if(tabla[h][column] == 1)
            return false;
    }
    int cRow = row;
    int cColumn = column;
    while(cRow >=0 && cColumn <=7)
    {
        if(tabla[cRow][cColumn] == 1)
            return false;
        cRow --;
        cColumn ++;
    }
    cRow = row;
    cColumn = column;
    while(cRow >=0 && cColumn >=0)
    {
        if(tabla[cRow][cColumn] == 1)
            return false;
        cRow --;
        cColumn --;
    }
    return true;

}
void out()
{
    for(int l = 0; l<=7; l++)
        {for (int c = 0; c<=7; c++)
    {
        cout<< tabla[l][c] << " ";
    }
    cout<< "\n";
        }
}
int bkt(int row, int column)
{
    if(row == 8)
    {
        solutii++;
        out();
        cout<< endl;
    }
    else {
        for(int k = 0; k<=7; k++)
        {
            if(verificare(row, k))
                {tabla[row][k] = 1;
            bkt(row + 1, 0);}
            tabla[row][k] = 0;
        }
    }
}

int main()
{
    bkt(0, 0);
    cout<<"Au fost gasite " << solutii << " solutii";
    return 0;
}
