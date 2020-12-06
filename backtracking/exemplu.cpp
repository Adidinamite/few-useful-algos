#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("permutari.in");
ofstream fout("permutari.out");
int x[10];int n, p[10];
void out()
{
    for(int i=1; i<=n; ++i)
    {
        fout << x[i] << " ";
    }
    fout << endl;
}

void bkt(int pas)
{
    for(int i=1; i<=n; i++)
    {
       if(!p[i])
       {
           p[i] = 1;
           x[pas] = i;
           if(pas < n)
                bkt(pas+1);
           else
                out();
           p[i] = 0;
       }
    }
}
int main()
{

    fin >> n;
    bkt(1);
    return 0;
}
