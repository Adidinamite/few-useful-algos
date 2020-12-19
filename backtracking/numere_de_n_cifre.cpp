#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int sol[20],n;
int verifica(int pos)
{
    return 1;
}
void afisare()
{
    for(int i= 0 ; i<n; i++)
        cout<<sol[i];
    cout<<endl;
}
void bkt(int pos)
{
    if(pos == n) afisare();
    else
        for(int i = 0; i<4; i++)
    {
        sol[pos] = i;
        if(verifica(pos))
            bkt(pos+1);
    }
}
int main(){
    cin >> n;//cate cifre sa aiba numarul
    bkt(0);
    return 0;
}
