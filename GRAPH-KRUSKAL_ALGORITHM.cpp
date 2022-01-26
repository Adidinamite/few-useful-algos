#include <fstream>
#include <algorithm>
using namespace std;
#define pula 0x3f3f3f3f
ifstream cin("apm.in");
ofstream cout("apm.out");
#define DIM 400001
struct Muchii
{
    int i, j, cost;
}M[DIM], out[DIM];
int tata[200001];
int n ,m ;
void read()
{
    cin >> n >> m;
    for(int i = 1; i<=m; i++)
    {
        cin >> M[i].i >> M[i].j >> M[i].cost;
    }
}
bool comp(Muchii a, Muchii b)
{
    return (a.cost < b.cost);
}
void parent()
{
    for(int i = 1; i<=n; i++)
        tata[i]=i;
}
void link(int a, int b)
{
    tata[a] = tata[b];
}
int root(int r)
{
    if(tata[r] == r)
        return r;
    else return tata[r] = root(tata[r]);
}
int cnt = 0;
int cost_t=0;
void krsk()
{
    for(int i = 1; i<=m; i++)
    {
        int r1 = root(M[i].i);
        int r2 = root(M[i].j);
        if(r1 != r2)
        {
            link(r1,r2);
            cost_t += M[i].cost;
            out[++cnt] = M[i];
        }
    }
}
int main(){
    read();
    sort(M+1,M+1+m,comp);
    parent();
    krsk();
    cout << cost_t<< '\n' << cnt << '\n';
    for(int i = 1; i<=cnt; i++)
    {
        cout << out[i].i << " "<< out[i].j << '\n';
    }

}
