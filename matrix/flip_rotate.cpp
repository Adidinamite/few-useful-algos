#include <iostream>

using namespace std;
int n;
const int DIMENSIUNE=100;
int matrix[DIMENSIUNE][DIMENSIUNE];
void citire()
{
    cin >> n;
    for(int i = 1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> matrix[i][j];
}
void afisare()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout << matrix[i][j]<<" ";
        cout << endl;
    }
}
void horizontalFlip(int startRow, int startCol, int endRow, int endCol) /// (1, 1, n, n)
{
    if(startRow > endRow)
    {
        return ;
    }
    else
    {
        if(startCol < endCol)
        {
            int aux = matrix[startRow][startCol];
            matrix[startRow][startCol] = matrix[startRow][endCol];
            matrix[startRow][endCol] = aux;
            horizontalFlip(startRow, startCol+1, endRow, endCol-1);
        }
        else
        {
            horizontalFlip(startRow+1, 1, n, n);
        }
    }
}
void verticalFlip(int startRow, int startCol, int endRow, int endCol) /// (1, 1, n, n)
{
    if(startCol > endCol)
    {
        return ;
    }
    else
    {
        if(startRow < endRow)
        {
            int aux = matrix[startRow][startCol];
            matrix[startRow][startCol] = matrix[endRow][startCol];
            matrix[endRow][startCol] = aux;
            verticalFlip(startRow+1, startCol, endRow-1, endCol);
        }
        else
        {
            verticalFlip(1, startCol+1, n, n);
        }
    }
}
void cycle(int &a, int &b, int &c, int &d)
{
    int aux = a;
    a = b;
    b = c;
    c = d;
    d = aux;
}
void rotateClockwise()
{
    for(int i =1; i<=n/2; i++)
    {
        for(int j=1; j<=(n+1)/2; j++)
        {
            cycle(matrix[i][j], matrix[n-j+1][i], matrix[n-i+1][n-j+1], matrix[j][n-i+1]);
        }
    }
}
void rotateantiClockwise()
{
    for(int i =1; i<=n/2; i++)
    {
        for(int j=1; j<=(n+1)/2; j++)
        {
            cycle(matrix[i][j], matrix[j][n-i+1], matrix[n-i+1][n-j+1], matrix[n-j+1][i]);
        }
    }
}
int main()
{
    citire();
    //verticalFlip(1, 1, n, n);
    rotateantiClockwise();
    afisare();
    return 0;
}
