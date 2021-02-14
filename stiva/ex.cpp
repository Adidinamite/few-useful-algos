#include <iostream>

using namespace std;
bool isEmpty(int k)
{
    if(k==0)
        return true;
    return false;
}
void push(int stiva[], int &k, int numar)
{
    stiva[++k] = numar;
}
int peek(int stiva[], int k)
{
    return stiva[k];
}
int pop(int stiva[], int &k)
{
    int rezultat = peek(stiva, k);
    k--;
    return rezultat;
}
int main()
{
    int stiva[100], k=0;

return 0;
}
