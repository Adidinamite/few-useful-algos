#include <iostream>

using namespace std;
void push(int coada[]. int &k, int numar)
{
    coada[++k] = numar;
}
int front(int coada[])
{
    return coada[1];
}
void pop(int coada[], int &k)
{
    int rezultat = coada[1];
    for(int i = 1; i < k - 1; i++)
        coada[i] = coada[i + 1];
    k--;
    return rezultat;
}
int main()
{
    int coada[100], k=0;

return 0;
}
