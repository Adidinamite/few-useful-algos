#include <fstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <bitset>
using namespace std;
ifstream cin("zoomba.in");
ofstream cout("zoomba.out");
int n, m, k, z, x, y;
vector <int> a[201];
vector <int> dp[201];
int v[11];
bitset<201>visited;
queue <int> q;
vector<int> distanta(201,0);
void bfs(int nod){
    q.push(nod);
    visited[nod] = 1;
    while(!q.empty())
    {
        nod = q.front();
        for(auto i : a[nod])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = 1;
                distanta[i] = distanta[nod] + 1;
            }
        }
        q.pop();
    }
}
void read()
{
    cin >> n >> m >> k >> z;
    for(int i = 1; i<=k; i++)
        cin >> v[i];
    for(int i = 1; i<=n; i++)
    {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
void out()
{
    for(int i = 1; i<=n;i++)
    {
        for(int j = 1; j<=k;j++)
        {
            cout << dp[i][v[j]]<<" ";
        }
        cout << endl <<" ";
    }
}
int main(){
    read();
    for(int i= 1; i<= k; i++)
    {
        bfs(v[i]);
        for(int ii = 1;ii<=n; ii++) {
            dp[i].push_back(distanta[ii]);
        }
    }
    for(int i = 1; i<=n; i++)//clear
    {
        distanta[i] = visited[i] = 0;
    }
    out();
}
