#include <fstream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
ifstream cin("dfs.in");
ofstream cout("dfs.out");
int n, m, x, p, q;
vector <int >v[100002];
int vizitat[100002];
void ascending(int max_nod)
{
    for(unsigned int k = 1; k<= max_nod;k++)
    {
        sort(v[k].begin(), v[k].end());
    }
}
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    vizitat[s] = 1;

    cout<<s<<" ";

    while(!q.empty())
    {
        for(int i=0;i<v[s].size();i++)
        {
            if(!vizitat[v[s][i]])
            {
                cout<<v[s][i]<<" ";

                vizitat[v[s][i]] = 1;
                q.push(v[s][i]);
            }
        }

        q.pop();
        s = q.front();

    }
}
int main()
{
    cin >> n >> m >> x;
    while(m--)
    {
        cin >> p >> q;
        v[p].push_back(q);
        v[q].push_back(p);
    }
    ascending(n);
    bfs(x);
}
