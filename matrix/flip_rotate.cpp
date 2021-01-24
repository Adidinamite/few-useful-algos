#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int n;
const int DIMENSIUNE=100;
int initialMatrix[DIMENSIUNE][DIMENSIUNE];
int matrix[DIMENSIUNE][DIMENSIUNE];
void citire()
{
    cin >> n;
    for(int i = 1; i<=n; i++)
        for(int j=1; j<=n; j++)
                {int temp = rand()%1000;
                matrix[i][j] = temp;
                initialMatrix[i][j] = temp;

                }
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
void horizontalFlip(int startRow, int startCol, int endRow, int endCol, int matrix[DIMENSIUNE][DIMENSIUNE]) /// (1, 1, n, n)
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
            horizontalFlip(startRow, startCol+1, endRow, endCol-1, matrix);
        }
        else
        {
            horizontalFlip(startRow+1, 1, n, n, matrix);
        }
    }
}
void verticalFlip(int startRow, int startCol, int endRow, int endCol, int matrix[DIMENSIUNE][DIMENSIUNE]) /// (1, 1, n, n)
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
            verticalFlip(startRow+1, startCol, endRow-1, endCol, matrix);
        }
        else
        {
            verticalFlip(1, startCol+1, n, n, matrix);
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
void rotateClockwise(int matrix[DIMENSIUNE][DIMENSIUNE])
{
    for(int i =1; i<=n/2; i++)
    {
        for(int j=1; j<=(n+1)/2; j++)
        {
            cycle(matrix[i][j], matrix[n-j+1][i], matrix[n-i+1][n-j+1], matrix[j][n-i+1]);
        }
    }
}
void rotateantiClockwise(int matrix[DIMENSIUNE][DIMENSIUNE])
{
    for(int i =1; i<=n/2; i++)
    {
        for(int j=1; j<=(n+1)/2; j++)
        {
            cycle(matrix[i][j], matrix[j][n-i+1], matrix[n-i+1][n-j+1], matrix[n-j+1][i]);
        }
    }
}
bool areEqual(int a[DIMENSIUNE][DIMENSIUNE], int b[DIMENSIUNE][DIMENSIUNE])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}
int main()
{
    srand(time(0));
    citire();
    //verticalFlip(1, 1, n, n);
    //horizontalFlip(1, 1, n, n);
    //rotateClockwise();
    //rotateantiClockwise();

    afisare();
    cout << "Unchanged should equal itself. Expected true: " << areEqual(initialMatrix, matrix) << endl;
    ///
    rotateClockwise(matrix);
    cout << "Clockwise 1 should be different to unchanged. Expected false: " << areEqual(initialMatrix, matrix) << endl;
    ///
    rotateantiClockwise(matrix);
    cout << "Rotate clocwise and back equal itself. Expected true: " << areEqual(initialMatrix, matrix) << endl;
    ///
    rotateClockwise(matrix);
    rotateClockwise(matrix);
    rotateClockwise(matrix);
    rotateClockwise(matrix);
    cout << "Clockwise 4 times resets to unchanged. Expected true: " << areEqual(initialMatrix, matrix) << endl;
    ///
    rotateantiClockwise(matrix);
    rotateantiClockwise(matrix);
    rotateantiClockwise(matrix);
    rotateantiClockwise(matrix);
    cout << "Anti Clockwise 4 times resets to unchanged. Expected true: " << areEqual(initialMatrix, matrix) << endl;
    ///
    horizontalFlip(1, 1, n, n, matrix);
    verticalFlip(1, 1, n, n, matrix);
    rotateClockwise(matrix);
    rotateClockwise(matrix);
    cout << "Flip horizontal+vertical same as 2 rotates. Expected true: " << areEqual(initialMatrix, matrix) << endl;

    return 0;
}
